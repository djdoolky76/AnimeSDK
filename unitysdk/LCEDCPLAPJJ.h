#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGPIEEKIEME;
class LCEDCPLAPJJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LCEDCPLAPJJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FC26CC0)
#define LCEDCPLAPJJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC26F90)
#define LCEDCPLAPJJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC266E0)
#define LCEDCPLAPJJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC265C0)
#define LCEDCPLAPJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC265B0)
#define LCEDCPLAPJJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC269C0)
#define LCEDCPLAPJJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC26840)
#define LCEDCPLAPJJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FC26810)
#define LCEDCPLAPJJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC26B40)
#define LCEDCPLAPJJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FC26570)
#define LCEDCPLAPJJ_LHNDAGFGPLH_OFFSET UNITYSDK_OFFSET(0x1FC26820)
#define LCEDCPLAPJJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FC26E00)
#define LCEDCPLAPJJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FC26D90)
#define LCEDCPLAPJJ_OAOHAFBDDMA_OFFSET UNITYSDK_OFFSET(0x1FC26830)
#define LCEDCPLAPJJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FC26800)
#define LCEDCPLAPJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC265A0)
#define LCEDCPLAPJJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC26B80)
#define LCEDCPLAPJJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC26BE0)

inline static constexpr unsigned int LCEDCPLAPJJ_TypeDefinitionIndex = 34769;

	class LCEDCPLAPJJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KGPIEEKIEME* HLJKHOMPDAF; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LCEDCPLAPJJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LCEDCPLAPJJ*>**)UnitySDK::FromName("", "LCEDCPLAPJJ")->GetStaticField(0x28B80);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object NLMACHMELAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LCEDCPLAPJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCEDCPLAPJJ*))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LCEDCPLAPJJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LCEDCPLAPJJ*>*(*)())((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LCEDCPLAPJJ* Clone()
		{
			return ((::LCEDCPLAPJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::KGPIEEKIEME* LHNDAGFGPLH()
		{
			return ((::KGPIEEKIEME*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_LHNDAGFGPLH_OFFSET))(this);
		}

		::System::Void OAOHAFBDDMA(::KGPIEEKIEME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGPIEEKIEME*))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_OAOHAFBDDMA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LCEDCPLAPJJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LCEDCPLAPJJ*))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LCEDCPLAPJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCEDCPLAPJJ*))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LCEDCPLAPJJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
