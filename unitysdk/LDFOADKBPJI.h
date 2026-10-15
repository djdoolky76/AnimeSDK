#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDFOADKBPJI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LDFOADKBPJI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8CA0B0)
#define LDFOADKBPJI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8CA380)
#define LDFOADKBPJI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8C9D00)
#define LDFOADKBPJI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8C9CD0)
#define LDFOADKBPJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C9CC0)
#define LDFOADKBPJI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8C9E70)
#define LDFOADKBPJI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8C9D90)
#define LDFOADKBPJI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8C9D80)
#define LDFOADKBPJI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8C9F40)
#define LDFOADKBPJI_GMMBPFAAMNI_OFFSET UNITYSDK_OFFSET(0x1E8C9D60)
#define LDFOADKBPJI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8C9C80)
#define LDFOADKBPJI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8CA200)
#define LDFOADKBPJI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8CA1C0)
#define LDFOADKBPJI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8C9D70)
#define LDFOADKBPJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8C9CB0)
#define LDFOADKBPJI_PDBNNPAGNDD_OFFSET UNITYSDK_OFFSET(0x1E8C9D50)
#define LDFOADKBPJI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8C9F70)
#define LDFOADKBPJI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8C9FD0)

inline static constexpr unsigned int LDFOADKBPJI_TypeDefinitionIndex = 32186;

	class LDFOADKBPJI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MKFMBJPPCAB; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::LDFOADKBPJI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LDFOADKBPJI*>**)UnitySDK::FromName("", "LDFOADKBPJI")->GetStaticField(0x2D9D0);
		}

		// static const ::System::Object FCKNJBENJKH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFOADKBPJI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LDFOADKBPJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDFOADKBPJI*))((::PBYTE)hIl2Cpp + LDFOADKBPJI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDFOADKBPJI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LDFOADKBPJI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LDFOADKBPJI*>*(*)())((::PBYTE)hIl2Cpp + LDFOADKBPJI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFOADKBPJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LDFOADKBPJI* Clone()
		{
			return ((::LDFOADKBPJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFOADKBPJI_CLONE_OFFSET))(this);
		}

		::System::UInt32 PDBNNPAGNDD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFOADKBPJI_PDBNNPAGNDD_OFFSET))(this);
		}

		::System::Void GMMBPFAAMNI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDFOADKBPJI_GMMBPFAAMNI_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFOADKBPJI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDFOADKBPJI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDFOADKBPJI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LDFOADKBPJI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LDFOADKBPJI*))((::PBYTE)hIl2Cpp + LDFOADKBPJI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFOADKBPJI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFOADKBPJI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LDFOADKBPJI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFOADKBPJI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LDFOADKBPJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDFOADKBPJI*))((::PBYTE)hIl2Cpp + LDFOADKBPJI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LDFOADKBPJI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
