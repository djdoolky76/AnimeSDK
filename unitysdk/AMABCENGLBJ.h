#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMABCENGLBJ;
class OIIPJFDNPAH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AMABCENGLBJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E515E10)
#define AMABCENGLBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E516130)
#define AMABCENGLBJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5157F0)
#define AMABCENGLBJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E515780)
#define AMABCENGLBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E515770)
#define AMABCENGLBJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E515A00)
#define AMABCENGLBJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E515890)
#define AMABCENGLBJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E515CD0)
#define AMABCENGLBJ_IONOHIGHHDA_OFFSET UNITYSDK_OFFSET(0x1E515870)
#define AMABCENGLBJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E515730)
#define AMABCENGLBJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E515F40)
#define AMABCENGLBJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E515E70)
#define AMABCENGLBJ_NENFGIBKHFD_OFFSET UNITYSDK_OFFSET(0x1E515880)
#define AMABCENGLBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E515760)
#define AMABCENGLBJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E515D20)
#define AMABCENGLBJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E515D80)

inline static constexpr unsigned int AMABCENGLBJ_TypeDefinitionIndex = 34889;

	class AMABCENGLBJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::OIIPJFDNPAH* OIOEJLJJMNE; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AMABCENGLBJ")->GetStaticField(0x3A910);
		}

		// static const ::System::Object CJDOFKHNJAO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMABCENGLBJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AMABCENGLBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMABCENGLBJ*))((::PBYTE)hIl2Cpp + AMABCENGLBJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMABCENGLBJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AMABCENGLBJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMABCENGLBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AMABCENGLBJ* Clone()
		{
			return ((::AMABCENGLBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMABCENGLBJ_CLONE_OFFSET))(this);
		}

		::OIIPJFDNPAH* IONOHIGHHDA()
		{
			return ((::OIIPJFDNPAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMABCENGLBJ_IONOHIGHHDA_OFFSET))(this);
		}

		::System::Void NENFGIBKHFD(::OIIPJFDNPAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIIPJFDNPAH*))((::PBYTE)hIl2Cpp + AMABCENGLBJ_NENFGIBKHFD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AMABCENGLBJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AMABCENGLBJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AMABCENGLBJ*))((::PBYTE)hIl2Cpp + AMABCENGLBJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMABCENGLBJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMABCENGLBJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AMABCENGLBJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMABCENGLBJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AMABCENGLBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMABCENGLBJ*))((::PBYTE)hIl2Cpp + AMABCENGLBJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AMABCENGLBJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
