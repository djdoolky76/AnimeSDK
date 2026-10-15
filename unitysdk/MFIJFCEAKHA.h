#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFIJFCEAKHA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MFIJFCEAKHA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9EC960)
#define MFIJFCEAKHA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9ECB20)
#define MFIJFCEAKHA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9EC540)
#define MFIJFCEAKHA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9EC510)
#define MFIJFCEAKHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9EC500)
#define MFIJFCEAKHA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9EC690)
#define MFIJFCEAKHA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9EC5B0)
#define MFIJFCEAKHA_FDFPOIGEHGB_OFFSET UNITYSDK_OFFSET(0x1E9EC5A0)
#define MFIJFCEAKHA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9EC810)
#define MFIJFCEAKHA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9EC4C0)
#define MFIJFCEAKHA_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0x1E9EC590)
#define MFIJFCEAKHA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9EC9C0)
#define MFIJFCEAKHA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9EC990)
#define MFIJFCEAKHA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9EC4F0)
#define MFIJFCEAKHA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9EC840)
#define MFIJFCEAKHA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9EC8A0)

inline static constexpr unsigned int MFIJFCEAKHA_TypeDefinitionIndex = 28100;

	class MFIJFCEAKHA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean KJFDGOJFJLK; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MFIJFCEAKHA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MFIJFCEAKHA*>**)UnitySDK::FromName("", "MFIJFCEAKHA")->GetStaticField(0x4ED70);
		}

		// static const ::System::Object GFOAADDNLKF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIJFCEAKHA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MFIJFCEAKHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFIJFCEAKHA*))((::PBYTE)hIl2Cpp + MFIJFCEAKHA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFIJFCEAKHA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MFIJFCEAKHA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MFIJFCEAKHA*>*(*)())((::PBYTE)hIl2Cpp + MFIJFCEAKHA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIJFCEAKHA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MFIJFCEAKHA* Clone()
		{
			return ((::MFIJFCEAKHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIJFCEAKHA_CLONE_OFFSET))(this);
		}

		::System::Boolean JKEONEEPIHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIJFCEAKHA_JKEONEEPIHH_OFFSET))(this);
		}

		::System::Void FDFPOIGEHGB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MFIJFCEAKHA_FDFPOIGEHGB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MFIJFCEAKHA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MFIJFCEAKHA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MFIJFCEAKHA*))((::PBYTE)hIl2Cpp + MFIJFCEAKHA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIJFCEAKHA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIJFCEAKHA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MFIJFCEAKHA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIJFCEAKHA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MFIJFCEAKHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFIJFCEAKHA*))((::PBYTE)hIl2Cpp + MFIJFCEAKHA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MFIJFCEAKHA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
