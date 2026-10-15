#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIFADCJKKFE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GIFADCJKKFE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E468750)
#define GIFADCJKKFE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E468970)
#define GIFADCJKKFE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4683A0)
#define GIFADCJKKFE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E468370)
#define GIFADCJKKFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E468360)
#define GIFADCJKKFE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4684D0)
#define GIFADCJKKFE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E468400)
#define GIFADCJKKFE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E468640)
#define GIFADCJKKFE_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x1E4683E0)
#define GIFADCJKKFE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E468320)
#define GIFADCJKKFE_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x1E4683F0)
#define GIFADCJKKFE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E468810)
#define GIFADCJKKFE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4687E0)
#define GIFADCJKKFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E468350)
#define GIFADCJKKFE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E468670)
#define GIFADCJKKFE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4686D0)

inline static constexpr unsigned int GIFADCJKKFE_TypeDefinitionIndex = 26246;

	class GIFADCJKKFE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KBBFPCGLDCN; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GIFADCJKKFE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GIFADCJKKFE*>**)UnitySDK::FromName("", "GIFADCJKKFE")->GetStaticField(0x18670);
		}

		// static const ::System::Object CLGAAGPCNGI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFADCJKKFE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GIFADCJKKFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIFADCJKKFE*))((::PBYTE)hIl2Cpp + GIFADCJKKFE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIFADCJKKFE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GIFADCJKKFE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GIFADCJKKFE*>*(*)())((::PBYTE)hIl2Cpp + GIFADCJKKFE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFADCJKKFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GIFADCJKKFE* Clone()
		{
			return ((::GIFADCJKKFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFADCJKKFE_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGKKIODILCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFADCJKKFE_JGKKIODILCO_OFFSET))(this);
		}

		::System::Void KAADEPADNMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIFADCJKKFE_KAADEPADNMH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GIFADCJKKFE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GIFADCJKKFE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GIFADCJKKFE*))((::PBYTE)hIl2Cpp + GIFADCJKKFE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFADCJKKFE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFADCJKKFE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GIFADCJKKFE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFADCJKKFE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GIFADCJKKFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIFADCJKKFE*))((::PBYTE)hIl2Cpp + GIFADCJKKFE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GIFADCJKKFE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
