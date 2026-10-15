#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBNKNCDIJLD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MBNKNCDIJLD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9BE9B0)
#define MBNKNCDIJLD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9BEC10)
#define MBNKNCDIJLD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9BE5B0)
#define MBNKNCDIJLD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9BE520)
#define MBNKNCDIJLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9BE4D0)
#define MBNKNCDIJLD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9BE6E0)
#define MBNKNCDIJLD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9BE5F0)
#define MBNKNCDIJLD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9BE7D0)
#define MBNKNCDIJLD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9BE490)
#define MBNKNCDIJLD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9BEA70)
#define MBNKNCDIJLD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9BEA20)
#define MBNKNCDIJLD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9BE4C0)
#define MBNKNCDIJLD_PFMBOBHKMHC_OFFSET UNITYSDK_OFFSET(0x1E9BE5E0)
#define MBNKNCDIJLD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9BE8D0)
#define MBNKNCDIJLD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9BE930)

inline static constexpr unsigned int MBNKNCDIJLD_TypeDefinitionIndex = 33209;

	class MBNKNCDIJLD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PAGOGAPMDAA; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_GHPOJIAMADJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "MBNKNCDIJLD")->GetStaticField(0x484B0);
		}

		static ::Google::Protobuf::MessageParser_1<::MBNKNCDIJLD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MBNKNCDIJLD*>**)UnitySDK::FromName("", "MBNKNCDIJLD")->GetStaticField(0x484B8);
		}

		// static const ::System::Object HKJOHHLBMMB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBNKNCDIJLD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MBNKNCDIJLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBNKNCDIJLD*))((::PBYTE)hIl2Cpp + MBNKNCDIJLD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBNKNCDIJLD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MBNKNCDIJLD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MBNKNCDIJLD*>*(*)())((::PBYTE)hIl2Cpp + MBNKNCDIJLD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBNKNCDIJLD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MBNKNCDIJLD* Clone()
		{
			return ((::MBNKNCDIJLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBNKNCDIJLD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PFMBOBHKMHC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBNKNCDIJLD_PFMBOBHKMHC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MBNKNCDIJLD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MBNKNCDIJLD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MBNKNCDIJLD*))((::PBYTE)hIl2Cpp + MBNKNCDIJLD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBNKNCDIJLD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBNKNCDIJLD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MBNKNCDIJLD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBNKNCDIJLD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MBNKNCDIJLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBNKNCDIJLD*))((::PBYTE)hIl2Cpp + MBNKNCDIJLD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MBNKNCDIJLD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
