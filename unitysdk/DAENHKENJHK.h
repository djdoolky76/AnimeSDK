#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAENHKENJHK;
class KJEOBMBMNIN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DAENHKENJHK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E120AE0)
#define DAENHKENJHK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E120DE0)
#define DAENHKENJHK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E120660)
#define DAENHKENJHK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1205B0)
#define DAENHKENJHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E120560)
#define DAENHKENJHK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E120840)
#define DAENHKENJHK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1206C0)
#define DAENHKENJHK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E120960)
#define DAENHKENJHK_JHEFPOGNBND_OFFSET UNITYSDK_OFFSET(0x1E1206B0)
#define DAENHKENJHK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1204F0)
#define DAENHKENJHK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E120C20)
#define DAENHKENJHK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E120B80)
#define DAENHKENJHK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E120550)
#define DAENHKENJHK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1209D0)
#define DAENHKENJHK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E120A30)

inline static constexpr unsigned int DAENHKENJHK_TypeDefinitionIndex = 32968;

	class DAENHKENJHK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::KJEOBMBMNIN*>* JLFDMJMJDND; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::KJEOBMBMNIN*>** StaticGet_JKBHDLODNOE()
		{
			return (::Google::Protobuf::FieldCodec_1<::KJEOBMBMNIN*>**)UnitySDK::FromName("", "DAENHKENJHK")->GetStaticField(0x21340);
		}

		static ::Google::Protobuf::MessageParser_1<::DAENHKENJHK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DAENHKENJHK*>**)UnitySDK::FromName("", "DAENHKENJHK")->GetStaticField(0x21348);
		}

		// static const ::System::Object CPBPPPJBFGH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAENHKENJHK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DAENHKENJHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAENHKENJHK*))((::PBYTE)hIl2Cpp + DAENHKENJHK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAENHKENJHK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DAENHKENJHK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DAENHKENJHK*>*(*)())((::PBYTE)hIl2Cpp + DAENHKENJHK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAENHKENJHK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DAENHKENJHK* Clone()
		{
			return ((::DAENHKENJHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAENHKENJHK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KJEOBMBMNIN*>* JHEFPOGNBND()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KJEOBMBMNIN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAENHKENJHK_JHEFPOGNBND_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DAENHKENJHK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DAENHKENJHK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DAENHKENJHK*))((::PBYTE)hIl2Cpp + DAENHKENJHK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAENHKENJHK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAENHKENJHK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DAENHKENJHK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAENHKENJHK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DAENHKENJHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAENHKENJHK*))((::PBYTE)hIl2Cpp + DAENHKENJHK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DAENHKENJHK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
