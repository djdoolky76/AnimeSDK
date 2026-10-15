#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBFKLKGHAMJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EBFKLKGHAMJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E233960)
#define EBFKLKGHAMJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E233B80)
#define EBFKLKGHAMJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2335B0)
#define EBFKLKGHAMJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E233580)
#define EBFKLKGHAMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E233570)
#define EBFKLKGHAMJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2336E0)
#define EBFKLKGHAMJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E233610)
#define EBFKLKGHAMJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E233850)
#define EBFKLKGHAMJ_JIHJMJJMDKB_OFFSET UNITYSDK_OFFSET(0x1E2335F0)
#define EBFKLKGHAMJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E233530)
#define EBFKLKGHAMJ_KPFBAKNHMAO_OFFSET UNITYSDK_OFFSET(0x1E233600)
#define EBFKLKGHAMJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E233A20)
#define EBFKLKGHAMJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2339F0)
#define EBFKLKGHAMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E233560)
#define EBFKLKGHAMJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E233880)
#define EBFKLKGHAMJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2338E0)

inline static constexpr unsigned int EBFKLKGHAMJ_TypeDefinitionIndex = 31451;

	class EBFKLKGHAMJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FLFEKHCLHCE; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EBFKLKGHAMJ")->GetStaticField(0x4A580);
		}

		// static const ::System::Object CPHNGFPDBPG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFKLKGHAMJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EBFKLKGHAMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBFKLKGHAMJ*))((::PBYTE)hIl2Cpp + EBFKLKGHAMJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBFKLKGHAMJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EBFKLKGHAMJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFKLKGHAMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EBFKLKGHAMJ* Clone()
		{
			return ((::EBFKLKGHAMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFKLKGHAMJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 JIHJMJJMDKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFKLKGHAMJ_JIHJMJJMDKB_OFFSET))(this);
		}

		::System::Void KPFBAKNHMAO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBFKLKGHAMJ_KPFBAKNHMAO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EBFKLKGHAMJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EBFKLKGHAMJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EBFKLKGHAMJ*))((::PBYTE)hIl2Cpp + EBFKLKGHAMJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFKLKGHAMJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFKLKGHAMJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EBFKLKGHAMJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFKLKGHAMJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EBFKLKGHAMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBFKLKGHAMJ*))((::PBYTE)hIl2Cpp + EBFKLKGHAMJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EBFKLKGHAMJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
