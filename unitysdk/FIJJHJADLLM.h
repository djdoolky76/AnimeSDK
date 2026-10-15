#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIJJHJADLLM;
class NPLMMCGAJDF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FIJJHJADLLM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3998D0)
#define FIJJHJADLLM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E399C50)
#define FIJJHJADLLM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E399420)
#define FIJJHJADLLM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E399360)
#define FIJJHJADLLM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E399310)
#define FIJJHJADLLM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3995D0)
#define FIJJHJADLLM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E399480)
#define FIJJHJADLLM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E399460)
#define FIJJHJADLLM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E399700)
#define FIJJHJADLLM_JCBCKGHAGMJ_OFFSET UNITYSDK_OFFSET(0x1E399470)
#define FIJJHJADLLM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3992D0)
#define FIJJHJADLLM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E399A80)
#define FIJJHJADLLM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3999E0)
#define FIJJHJADLLM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E399450)
#define FIJJHJADLLM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E399300)
#define FIJJHJADLLM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E399770)
#define FIJJHJADLLM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3997D0)

inline static constexpr unsigned int FIJJHJADLLM_TypeDefinitionIndex = 28821;

	class FIJJHJADLLM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::NPLMMCGAJDF*>* GEGKDEALGDF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_BHAFPFJMPEH()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "FIJJHJADLLM")->GetStaticField(0x60130);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FIJJHJADLLM")->GetStaticField(0x60138);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object GODKLBDAMJO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJJHJADLLM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FIJJHJADLLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIJJHJADLLM*))((::PBYTE)hIl2Cpp + FIJJHJADLLM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIJJHJADLLM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FIJJHJADLLM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJJHJADLLM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FIJJHJADLLM* Clone()
		{
			return ((::FIJJHJADLLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJJHJADLLM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJJHJADLLM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FIJJHJADLLM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NPLMMCGAJDF*>* JCBCKGHAGMJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NPLMMCGAJDF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJJHJADLLM_JCBCKGHAGMJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FIJJHJADLLM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FIJJHJADLLM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FIJJHJADLLM*))((::PBYTE)hIl2Cpp + FIJJHJADLLM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJJHJADLLM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJJHJADLLM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FIJJHJADLLM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJJHJADLLM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FIJJHJADLLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIJJHJADLLM*))((::PBYTE)hIl2Cpp + FIJJHJADLLM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FIJJHJADLLM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
