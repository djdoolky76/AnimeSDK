#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHCNMGNAIBG;
class MACGIEKOBNM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MACGIEKOBNM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9D65A0)
#define MACGIEKOBNM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D68C0)
#define MACGIEKOBNM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9D6010)
#define MACGIEKOBNM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9D5FA0)
#define MACGIEKOBNM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D5F90)
#define MACGIEKOBNM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9D6250)
#define MACGIEKOBNM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9D60D0)
#define MACGIEKOBNM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E9D60A0)
#define MACGIEKOBNM_FIDDFCKIPBO_OFFSET UNITYSDK_OFFSET(0x1E9D60C0)
#define MACGIEKOBNM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9D63D0)
#define MACGIEKOBNM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9D5F50)
#define MACGIEKOBNM_KIIJMEIPKLE_OFFSET UNITYSDK_OFFSET(0x1E9D60B0)
#define MACGIEKOBNM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9D6700)
#define MACGIEKOBNM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9D6670)
#define MACGIEKOBNM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E9D6090)
#define MACGIEKOBNM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9D5F80)
#define MACGIEKOBNM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9D6460)
#define MACGIEKOBNM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9D64C0)

inline static constexpr unsigned int MACGIEKOBNM_TypeDefinitionIndex = 31577;

	class MACGIEKOBNM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::HHCNMGNAIBG* DFIPEOCEEKJ; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MACGIEKOBNM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MACGIEKOBNM*>**)UnitySDK::FromName("", "MACGIEKOBNM")->GetStaticField(0x42700);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object IFDGPJHCENL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MACGIEKOBNM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MACGIEKOBNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MACGIEKOBNM*))((::PBYTE)hIl2Cpp + MACGIEKOBNM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MACGIEKOBNM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MACGIEKOBNM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MACGIEKOBNM*>*(*)())((::PBYTE)hIl2Cpp + MACGIEKOBNM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MACGIEKOBNM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MACGIEKOBNM* Clone()
		{
			return ((::MACGIEKOBNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MACGIEKOBNM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MACGIEKOBNM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MACGIEKOBNM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::HHCNMGNAIBG* KIIJMEIPKLE()
		{
			return ((::HHCNMGNAIBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MACGIEKOBNM_KIIJMEIPKLE_OFFSET))(this);
		}

		::System::Void FIDDFCKIPBO(::HHCNMGNAIBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHCNMGNAIBG*))((::PBYTE)hIl2Cpp + MACGIEKOBNM_FIDDFCKIPBO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MACGIEKOBNM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MACGIEKOBNM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MACGIEKOBNM*))((::PBYTE)hIl2Cpp + MACGIEKOBNM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MACGIEKOBNM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MACGIEKOBNM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MACGIEKOBNM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MACGIEKOBNM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MACGIEKOBNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MACGIEKOBNM*))((::PBYTE)hIl2Cpp + MACGIEKOBNM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MACGIEKOBNM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
