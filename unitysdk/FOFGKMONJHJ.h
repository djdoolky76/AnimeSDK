#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOFGKMONJHJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FOFGKMONJHJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3CD490)
#define FOFGKMONJHJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3CD650)
#define FOFGKMONJHJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3CD020)
#define FOFGKMONJHJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3CCFF0)
#define FOFGKMONJHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3CCFE0)
#define FOFGKMONJHJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3CD1C0)
#define FOFGKMONJHJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3CD0B0)
#define FOFGKMONJHJ_GCMDGLLKFLO_OFFSET UNITYSDK_OFFSET(0x1E3CD090)
#define FOFGKMONJHJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3CD340)
#define FOFGKMONJHJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3CCF70)
#define FOFGKMONJHJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3CD4F0)
#define FOFGKMONJHJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3CD4C0)
#define FOFGKMONJHJ_OJAKBMEOABG_OFFSET UNITYSDK_OFFSET(0x1E3CD0A0)
#define FOFGKMONJHJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3CCFD0)
#define FOFGKMONJHJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3CD370)
#define FOFGKMONJHJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3CD3D0)

inline static constexpr unsigned int FOFGKMONJHJ_TypeDefinitionIndex = 27727;

	class FOFGKMONJHJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean BDOKFPEPOGK; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FOFGKMONJHJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FOFGKMONJHJ*>**)UnitySDK::FromName("", "FOFGKMONJHJ")->GetStaticField(0x5E6D0);
		}

		// static const ::System::Object GLAOKGNHFDL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFGKMONJHJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FOFGKMONJHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOFGKMONJHJ*))((::PBYTE)hIl2Cpp + FOFGKMONJHJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOFGKMONJHJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FOFGKMONJHJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FOFGKMONJHJ*>*(*)())((::PBYTE)hIl2Cpp + FOFGKMONJHJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFGKMONJHJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FOFGKMONJHJ* Clone()
		{
			return ((::FOFGKMONJHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFGKMONJHJ_CLONE_OFFSET))(this);
		}

		::System::Boolean GCMDGLLKFLO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFGKMONJHJ_GCMDGLLKFLO_OFFSET))(this);
		}

		::System::Void OJAKBMEOABG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOFGKMONJHJ_OJAKBMEOABG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOFGKMONJHJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FOFGKMONJHJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FOFGKMONJHJ*))((::PBYTE)hIl2Cpp + FOFGKMONJHJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFGKMONJHJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFGKMONJHJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FOFGKMONJHJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFGKMONJHJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FOFGKMONJHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOFGKMONJHJ*))((::PBYTE)hIl2Cpp + FOFGKMONJHJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FOFGKMONJHJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
