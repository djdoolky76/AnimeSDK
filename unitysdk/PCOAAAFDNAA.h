#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PCOAAAFDNAA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PCOAAAFDNAA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEDD720)
#define PCOAAAFDNAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEDD9F0)
#define PCOAAAFDNAA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEDD370)
#define PCOAAAFDNAA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEDD340)
#define PCOAAAFDNAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEDD330)
#define PCOAAAFDNAA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEDD4E0)
#define PCOAAAFDNAA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEDD400)
#define PCOAAAFDNAA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DEDD3D0)
#define PCOAAAFDNAA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEDD5B0)
#define PCOAAAFDNAA_GMBEHLBKCMK_OFFSET UNITYSDK_OFFSET(0x1DEDD3F0)
#define PCOAAAFDNAA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEDD2F0)
#define PCOAAAFDNAA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEDD870)
#define PCOAAAFDNAA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEDD830)
#define PCOAAAFDNAA_NCLFAIINDLE_OFFSET UNITYSDK_OFFSET(0x1DEDD3E0)
#define PCOAAAFDNAA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DEDD3C0)
#define PCOAAAFDNAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEDD320)
#define PCOAAAFDNAA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEDD5E0)
#define PCOAAAFDNAA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEDD640)

inline static constexpr unsigned int PCOAAAFDNAA_TypeDefinitionIndex = 26143;

	class PCOAAAFDNAA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 INIMEEHHBJG; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::PCOAAAFDNAA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PCOAAAFDNAA*>**)UnitySDK::FromName("", "PCOAAAFDNAA")->GetStaticField(0x2EFF0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EBOFLHAJBHB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCOAAAFDNAA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PCOAAAFDNAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCOAAAFDNAA*))((::PBYTE)hIl2Cpp + PCOAAAFDNAA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCOAAAFDNAA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PCOAAAFDNAA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PCOAAAFDNAA*>*(*)())((::PBYTE)hIl2Cpp + PCOAAAFDNAA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCOAAAFDNAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PCOAAAFDNAA* Clone()
		{
			return ((::PCOAAAFDNAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCOAAAFDNAA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCOAAAFDNAA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PCOAAAFDNAA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 NCLFAIINDLE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCOAAAFDNAA_NCLFAIINDLE_OFFSET))(this);
		}

		::System::Void GMBEHLBKCMK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PCOAAAFDNAA_GMBEHLBKCMK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PCOAAAFDNAA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PCOAAAFDNAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PCOAAAFDNAA*))((::PBYTE)hIl2Cpp + PCOAAAFDNAA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCOAAAFDNAA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCOAAAFDNAA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PCOAAAFDNAA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCOAAAFDNAA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PCOAAAFDNAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCOAAAFDNAA*))((::PBYTE)hIl2Cpp + PCOAAAFDNAA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PCOAAAFDNAA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
