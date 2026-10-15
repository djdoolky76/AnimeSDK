#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKNKNLGMACL.h"
#include "unitysdk/System/Object.h"
class NINBBMNLKEH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NINBBMNLKEH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB09DD0)
#define NINBBMNLKEH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB0A0E0)
#define NINBBMNLKEH_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB09A10)
#define NINBBMNLKEH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB099E0)
#define NINBBMNLKEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB099D0)
#define NINBBMNLKEH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB09B80)
#define NINBBMNLKEH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB09AA0)
#define NINBBMNLKEH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB09A90)
#define NINBBMNLKEH_FDDPCJMODGD_OFFSET UNITYSDK_OFFSET(0x1EB09A60)
#define NINBBMNLKEH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB09C50)
#define NINBBMNLKEH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB09990)
#define NINBBMNLKEH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB09F60)
#define NINBBMNLKEH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB09F20)
#define NINBBMNLKEH_NPHCBOINFMD_OFFSET UNITYSDK_OFFSET(0x1EB09A70)
#define NINBBMNLKEH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB09A80)
#define NINBBMNLKEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB099C0)
#define NINBBMNLKEH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB09C80)
#define NINBBMNLKEH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB09CE0)

inline static constexpr unsigned int NINBBMNLKEH_TypeDefinitionIndex = 26154;

	class NINBBMNLKEH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::FKNKNLGMACL CNKEBBBFBDC; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::NINBBMNLKEH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NINBBMNLKEH*>**)UnitySDK::FromName("", "NINBBMNLKEH")->GetStaticField(0x684C0);
		}

		// static const ::System::Object COICJNBDJFC; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NINBBMNLKEH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NINBBMNLKEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NINBBMNLKEH*))((::PBYTE)hIl2Cpp + NINBBMNLKEH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NINBBMNLKEH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NINBBMNLKEH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NINBBMNLKEH*>*(*)())((::PBYTE)hIl2Cpp + NINBBMNLKEH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NINBBMNLKEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NINBBMNLKEH* Clone()
		{
			return ((::NINBBMNLKEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NINBBMNLKEH_CLONE_OFFSET))(this);
		}

		::FKNKNLGMACL FDDPCJMODGD()
		{
			return ((::FKNKNLGMACL(*)(::PVOID))((::PBYTE)hIl2Cpp + NINBBMNLKEH_FDDPCJMODGD_OFFSET))(this);
		}

		::System::Void NPHCBOINFMD(::FKNKNLGMACL a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKNKNLGMACL))((::PBYTE)hIl2Cpp + NINBBMNLKEH_NPHCBOINFMD_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NINBBMNLKEH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NINBBMNLKEH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NINBBMNLKEH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NINBBMNLKEH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NINBBMNLKEH*))((::PBYTE)hIl2Cpp + NINBBMNLKEH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NINBBMNLKEH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NINBBMNLKEH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NINBBMNLKEH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NINBBMNLKEH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NINBBMNLKEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NINBBMNLKEH*))((::PBYTE)hIl2Cpp + NINBBMNLKEH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NINBBMNLKEH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
