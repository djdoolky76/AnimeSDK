#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCOCKCOOOKO;
class NNPGLCGNICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CCOCKCOOOKO_BLBBMAGLFDL_OFFSET UNITYSDK_OFFSET(0x1FEBEC60)
#define CCOCKCOOOKO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FEBF100)
#define CCOCKCOOOKO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEBF3F0)
#define CCOCKCOOOKO_CLONE_OFFSET UNITYSDK_OFFSET(0x1FEBEBC0)
#define CCOCKCOOOKO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FEBEB50)
#define CCOCKCOOOKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1FEBEB40)
#define CCOCKCOOOKO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FEBEE00)
#define CCOCKCOOOKO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FEBEC80)
#define CCOCKCOOOKO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FEBEC50)
#define CCOCKCOOOKO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FEBEF80)
#define CCOCKCOOOKO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FEBEB00)
#define CCOCKCOOOKO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FEBF250)
#define CCOCKCOOOKO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FEBF1D0)
#define CCOCKCOOOKO_MGBKGAPDHLG_OFFSET UNITYSDK_OFFSET(0x1FEBEC70)
#define CCOCKCOOOKO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FEBEC40)
#define CCOCKCOOOKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FEBEB30)
#define CCOCKCOOOKO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FEBEFC0)
#define CCOCKCOOOKO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FEBF020)

inline static constexpr unsigned int CCOCKCOOOKO_TypeDefinitionIndex = 34907;

	class CCOCKCOOOKO : public ::System::Object
	{
	public:
		::NNPGLCGNICI* LKDEFKKLEDJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CCOCKCOOOKO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CCOCKCOOOKO*>**)UnitySDK::FromName("", "CCOCKCOOOKO")->GetStaticField(0x61720);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HNBHJOFPFLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOCKCOOOKO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CCOCKCOOOKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCOCKCOOOKO*))((::PBYTE)hIl2Cpp + CCOCKCOOOKO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCOCKCOOOKO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CCOCKCOOOKO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CCOCKCOOOKO*>*(*)())((::PBYTE)hIl2Cpp + CCOCKCOOOKO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOCKCOOOKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CCOCKCOOOKO* Clone()
		{
			return ((::CCOCKCOOOKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOCKCOOOKO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOCKCOOOKO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CCOCKCOOOKO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::NNPGLCGNICI* BLBBMAGLFDL()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOCKCOOOKO_BLBBMAGLFDL_OFFSET))(this);
		}

		::System::Void MGBKGAPDHLG(::NNPGLCGNICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNPGLCGNICI*))((::PBYTE)hIl2Cpp + CCOCKCOOOKO_MGBKGAPDHLG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCOCKCOOOKO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CCOCKCOOOKO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CCOCKCOOOKO*))((::PBYTE)hIl2Cpp + CCOCKCOOOKO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOCKCOOOKO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOCKCOOOKO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CCOCKCOOOKO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOCKCOOOKO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CCOCKCOOOKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCOCKCOOOKO*))((::PBYTE)hIl2Cpp + CCOCKCOOOKO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CCOCKCOOOKO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
