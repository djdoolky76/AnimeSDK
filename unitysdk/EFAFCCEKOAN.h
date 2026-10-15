#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFAFCCEKOAN;
class PKPICFPDHEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EFAFCCEKOAN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E25E0E0)
#define EFAFCCEKOAN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E25E470)
#define EFAFCCEKOAN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E25DC30)
#define EFAFCCEKOAN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E25DBA0)
#define EFAFCCEKOAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E25DB60)
#define EFAFCCEKOAN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E25DDE0)
#define EFAFCCEKOAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E25DC90)
#define EFAFCCEKOAN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E25DF00)
#define EFAFCCEKOAN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E25DB20)
#define EFAFCCEKOAN_LCKKGPFEKHM_OFFSET UNITYSDK_OFFSET(0x1E25DC60)
#define EFAFCCEKOAN_LGBEBPCAECE_OFFSET UNITYSDK_OFFSET(0x1E25DC80)
#define EFAFCCEKOAN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E25E2B0)
#define EFAFCCEKOAN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E25E210)
#define EFAFCCEKOAN_PBCCCNEBFPN_OFFSET UNITYSDK_OFFSET(0x1E25DC70)
#define EFAFCCEKOAN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E25DB50)
#define EFAFCCEKOAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E25DF70)
#define EFAFCCEKOAN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E25DFD0)

inline static constexpr unsigned int EFAFCCEKOAN_TypeDefinitionIndex = 30400;

	class EFAFCCEKOAN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::PKPICFPDHEO*>* MDELKGNPIOF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 DOLJGAFKGFJ; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::PKPICFPDHEO*>** StaticGet_GAINFCCDPFB()
		{
			return (::Google::Protobuf::FieldCodec_1<::PKPICFPDHEO*>**)UnitySDK::FromName("", "EFAFCCEKOAN")->GetStaticField(0x46840);
		}

		static ::Google::Protobuf::MessageParser_1<::EFAFCCEKOAN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EFAFCCEKOAN*>**)UnitySDK::FromName("", "EFAFCCEKOAN")->GetStaticField(0x46848);
		}

		// static const ::System::Object EFEMONKDOCM; // 0x0
		// static const ::System::Object CIAMJBNLMBJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAFCCEKOAN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EFAFCCEKOAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFAFCCEKOAN*))((::PBYTE)hIl2Cpp + EFAFCCEKOAN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFAFCCEKOAN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EFAFCCEKOAN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EFAFCCEKOAN*>*(*)())((::PBYTE)hIl2Cpp + EFAFCCEKOAN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAFCCEKOAN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EFAFCCEKOAN* Clone()
		{
			return ((::EFAFCCEKOAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAFCCEKOAN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PKPICFPDHEO*>* LCKKGPFEKHM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PKPICFPDHEO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAFCCEKOAN_LCKKGPFEKHM_OFFSET))(this);
		}

		::System::UInt32 PBCCCNEBFPN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAFCCEKOAN_PBCCCNEBFPN_OFFSET))(this);
		}

		::System::Void LGBEBPCAECE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EFAFCCEKOAN_LGBEBPCAECE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFAFCCEKOAN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EFAFCCEKOAN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EFAFCCEKOAN*))((::PBYTE)hIl2Cpp + EFAFCCEKOAN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAFCCEKOAN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAFCCEKOAN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EFAFCCEKOAN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAFCCEKOAN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EFAFCCEKOAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFAFCCEKOAN*))((::PBYTE)hIl2Cpp + EFAFCCEKOAN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EFAFCCEKOAN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
