#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEJIOGIGFAI;
class KJAMNOGFAMJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IEJIOGIGFAI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E63B9F0)
#define IEJIOGIGFAI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E63BD80)
#define IEJIOGIGFAI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E63B550)
#define IEJIOGIGFAI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E63B4C0)
#define IEJIOGIGFAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E63B480)
#define IEJIOGIGFAI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E63B700)
#define IEJIOGIGFAI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E63B5B0)
#define IEJIOGIGFAI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E63B820)
#define IEJIOGIGFAI_GOLPFFCDICE_OFFSET UNITYSDK_OFFSET(0x1E63B5A0)
#define IEJIOGIGFAI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E63B440)
#define IEJIOGIGFAI_LHCLEOIGLPP_OFFSET UNITYSDK_OFFSET(0x1E63B580)
#define IEJIOGIGFAI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E63BBC0)
#define IEJIOGIGFAI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E63BB20)
#define IEJIOGIGFAI_OGMHHLBHKOF_OFFSET UNITYSDK_OFFSET(0x1E63B590)
#define IEJIOGIGFAI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E63B470)
#define IEJIOGIGFAI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E63B890)
#define IEJIOGIGFAI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E63B8F0)

inline static constexpr unsigned int IEJIOGIGFAI_TypeDefinitionIndex = 32846;

	class IEJIOGIGFAI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::KJAMNOGFAMJ*>* NEALCPPFGGE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 JCGMPJONLCA; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_ILNGLPNJBNA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "IEJIOGIGFAI")->GetStaticField(0x48AE0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IEJIOGIGFAI")->GetStaticField(0x48AE8);
		}

		// static const ::System::Object DKJPPGGGNNI; // 0x0
		// static const ::System::Object GAHLJEECCFB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJIOGIGFAI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IEJIOGIGFAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEJIOGIGFAI*))((::PBYTE)hIl2Cpp + IEJIOGIGFAI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEJIOGIGFAI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IEJIOGIGFAI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJIOGIGFAI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IEJIOGIGFAI* Clone()
		{
			return ((::IEJIOGIGFAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJIOGIGFAI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KJAMNOGFAMJ*>* LHCLEOIGLPP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KJAMNOGFAMJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJIOGIGFAI_LHCLEOIGLPP_OFFSET))(this);
		}

		::System::UInt32 OGMHHLBHKOF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJIOGIGFAI_OGMHHLBHKOF_OFFSET))(this);
		}

		::System::Void GOLPFFCDICE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IEJIOGIGFAI_GOLPFFCDICE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IEJIOGIGFAI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IEJIOGIGFAI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IEJIOGIGFAI*))((::PBYTE)hIl2Cpp + IEJIOGIGFAI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJIOGIGFAI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJIOGIGFAI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IEJIOGIGFAI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJIOGIGFAI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IEJIOGIGFAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEJIOGIGFAI*))((::PBYTE)hIl2Cpp + IEJIOGIGFAI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IEJIOGIGFAI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
