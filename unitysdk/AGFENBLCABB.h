#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGFENBLCABB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AGFENBLCABB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0FE1B0)
#define AGFENBLCABB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0FE3D0)
#define AGFENBLCABB_CLMHHFDHNBJ_OFFSET UNITYSDK_OFFSET(0x1E0FDE40)
#define AGFENBLCABB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0FDE00)
#define AGFENBLCABB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0FDDD0)
#define AGFENBLCABB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0FDDC0)
#define AGFENBLCABB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0FDF30)
#define AGFENBLCABB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0FDE60)
#define AGFENBLCABB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0FE0A0)
#define AGFENBLCABB_JIMHOBGKOAJ_OFFSET UNITYSDK_OFFSET(0x1E0FDE50)
#define AGFENBLCABB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0FDD80)
#define AGFENBLCABB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0FE270)
#define AGFENBLCABB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0FE240)
#define AGFENBLCABB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0FDDB0)
#define AGFENBLCABB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0FE0D0)
#define AGFENBLCABB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0FE130)

inline static constexpr unsigned int AGFENBLCABB_TypeDefinitionIndex = 31392;

	class AGFENBLCABB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EKCHCJMBPFB; // 0x18
		static ::Google::Protobuf::MessageParser_1<::AGFENBLCABB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AGFENBLCABB*>**)UnitySDK::FromName("", "AGFENBLCABB")->GetStaticField(0x37470);
		}

		// static const ::System::Object EPMOLGOAKCJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFENBLCABB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AGFENBLCABB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGFENBLCABB*))((::PBYTE)hIl2Cpp + AGFENBLCABB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGFENBLCABB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AGFENBLCABB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AGFENBLCABB*>*(*)())((::PBYTE)hIl2Cpp + AGFENBLCABB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFENBLCABB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AGFENBLCABB* Clone()
		{
			return ((::AGFENBLCABB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFENBLCABB_CLONE_OFFSET))(this);
		}

		::System::UInt32 CLMHHFDHNBJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFENBLCABB_CLMHHFDHNBJ_OFFSET))(this);
		}

		::System::Void JIMHOBGKOAJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGFENBLCABB_JIMHOBGKOAJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AGFENBLCABB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AGFENBLCABB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AGFENBLCABB*))((::PBYTE)hIl2Cpp + AGFENBLCABB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFENBLCABB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFENBLCABB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AGFENBLCABB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFENBLCABB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AGFENBLCABB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGFENBLCABB*))((::PBYTE)hIl2Cpp + AGFENBLCABB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AGFENBLCABB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
