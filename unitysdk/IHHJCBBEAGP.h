#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDBDLBAPDBE;
class IHHJCBBEAGP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IHHJCBBEAGP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F97F940)
#define IHHJCBBEAGP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F97FD20)
#define IHHJCBBEAGP_CLONE_OFFSET UNITYSDK_OFFSET(0x1F97F300)
#define IHHJCBBEAGP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F97F280)
#define IHHJCBBEAGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1F97F270)
#define IHHJCBBEAGP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F97F580)
#define IHHJCBBEAGP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F97F3F0)
#define IHHJCBBEAGP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F97F3C0)
#define IHHJCBBEAGP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F97F710)
#define IHHJCBBEAGP_GHEIAEAOKAC_OFFSET UNITYSDK_OFFSET(0x1F97F3A0)
#define IHHJCBBEAGP_IGJOIMKFBNG_OFFSET UNITYSDK_OFFSET(0x1F97F390)
#define IHHJCBBEAGP_IHOIMOOAEEE_OFFSET UNITYSDK_OFFSET(0x1F97F3D0)
#define IHHJCBBEAGP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F97F230)
#define IHHJCBBEAGP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F97FB40)
#define IHHJCBBEAGP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F97FAA0)
#define IHHJCBBEAGP_NKICJALKDGG_OFFSET UNITYSDK_OFFSET(0x1F97F3E0)
#define IHHJCBBEAGP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F97F3B0)
#define IHHJCBBEAGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F97F260)
#define IHHJCBBEAGP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F97F7A0)
#define IHHJCBBEAGP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F97F800)

inline static constexpr unsigned int IHHJCBBEAGP_TypeDefinitionIndex = 28018;

	class IHHJCBBEAGP : public ::System::Object
	{
	public:
		::FDBDLBAPDBE* GMLPGJJJKDP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 CEAHPOGMPMB; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::IHHJCBBEAGP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IHHJCBBEAGP*>**)UnitySDK::FromName("", "IHHJCBBEAGP")->GetStaticField(0x4C7B0);
		}

		// static const ::System::Object KIAJFAMLJEG; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EAIHKAPNKDA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHJCBBEAGP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IHHJCBBEAGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHHJCBBEAGP*))((::PBYTE)hIl2Cpp + IHHJCBBEAGP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHHJCBBEAGP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IHHJCBBEAGP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IHHJCBBEAGP*>*(*)())((::PBYTE)hIl2Cpp + IHHJCBBEAGP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHJCBBEAGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IHHJCBBEAGP* Clone()
		{
			return ((::IHHJCBBEAGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHJCBBEAGP_CLONE_OFFSET))(this);
		}

		::FDBDLBAPDBE* IGJOIMKFBNG()
		{
			return ((::FDBDLBAPDBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHJCBBEAGP_IGJOIMKFBNG_OFFSET))(this);
		}

		::System::Void GHEIAEAOKAC(::FDBDLBAPDBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDBDLBAPDBE*))((::PBYTE)hIl2Cpp + IHHJCBBEAGP_GHEIAEAOKAC_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHJCBBEAGP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IHHJCBBEAGP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 IHOIMOOAEEE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHJCBBEAGP_IHOIMOOAEEE_OFFSET))(this);
		}

		::System::Void NKICJALKDGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IHHJCBBEAGP_NKICJALKDGG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IHHJCBBEAGP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IHHJCBBEAGP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IHHJCBBEAGP*))((::PBYTE)hIl2Cpp + IHHJCBBEAGP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHJCBBEAGP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHJCBBEAGP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IHHJCBBEAGP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHJCBBEAGP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IHHJCBBEAGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHHJCBBEAGP*))((::PBYTE)hIl2Cpp + IHHJCBBEAGP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IHHJCBBEAGP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
