#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACKNOAAIMPC.h"
#include "unitysdk/System/Object.h"
class CLDLKNMOOOH;
class NNPGLCGNICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CLDLKNMOOOH_AJMHIGMJHEO_OFFSET UNITYSDK_OFFSET(0x1E0F4D60)
#define CLDLKNMOOOH_BBAJPOHLCNK_OFFSET UNITYSDK_OFFSET(0x1E0F4E10)
#define CLDLKNMOOOH_BLBBMAGLFDL_OFFSET UNITYSDK_OFFSET(0x1E0F4DA0)
#define CLDLKNMOOOH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0F5370)
#define CLDLKNMOOOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0F5810)
#define CLDLKNMOOOH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0F4CD0)
#define CLDLKNMOOOH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0F4C50)
#define CLDLKNMOOOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0F4C40)
#define CLDLKNMOOOH_ENKJEHPJOCB_OFFSET UNITYSDK_OFFSET(0x1E0F4DD0)
#define CLDLKNMOOOH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0F4F40)
#define CLDLKNMOOOH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0F4E20)
#define CLDLKNMOOOH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E0F4D90)
#define CLDLKNMOOOH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0F5050)
#define CLDLKNMOOOH_IEGPFEIKGJE_OFFSET UNITYSDK_OFFSET(0x1E0F4DF0)
#define CLDLKNMOOOH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0F4C00)
#define CLDLKNMOOOH_KPCGBGLFFMI_OFFSET UNITYSDK_OFFSET(0x1E0F4DC0)
#define CLDLKNMOOOH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0F5710)
#define CLDLKNMOOOH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0F5660)
#define CLDLKNMOOOH_MGBKGAPDHLG_OFFSET UNITYSDK_OFFSET(0x1E0F4DB0)
#define CLDLKNMOOOH_MIIDDOBHAHH_OFFSET UNITYSDK_OFFSET(0x1E0F4D70)
#define CLDLKNMOOOH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E0F4D80)
#define CLDLKNMOOOH_OEKGBNJKFKC_OFFSET UNITYSDK_OFFSET(0x1E0F4DE0)
#define CLDLKNMOOOH_OJEHFFGHICH_OFFSET UNITYSDK_OFFSET(0x1E0F4E00)
#define CLDLKNMOOOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0F4C30)
#define CLDLKNMOOOH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0F50A0)
#define CLDLKNMOOOH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0F5100)

inline static constexpr unsigned int CLDLKNMOOOH_TypeDefinitionIndex = 27759;

	class CLDLKNMOOOH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NNPGLCGNICI* LKDEFKKLEDJ; // 0x18
		::System::UInt32 AJIMPNHBIBC; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		::System::UInt32 CNHGEGHJIGB; // 0x28
		::ACKNOAAIMPC ECONHBBLNGK; // 0x2C
		::System::UInt32 EGPEGGDDHED; // 0x30
		static ::Google::Protobuf::MessageParser_1<::CLDLKNMOOOH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CLDLKNMOOOH*>**)UnitySDK::FromName("", "CLDLKNMOOOH")->GetStaticField(0x1CB10);
		}

		// static const ::System::Object HPIOBKMAKIA; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HNBHJOFPFLM; // 0x0
		// static const ::System::Object HNGFEEMCELO; // 0x0
		// static const ::System::Object KONIJHFMOFE; // 0x0
		// static const ::System::Object KIHBEPDMDDB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDLKNMOOOH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CLDLKNMOOOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLDLKNMOOOH*))((::PBYTE)hIl2Cpp + CLDLKNMOOOH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLDLKNMOOOH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CLDLKNMOOOH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CLDLKNMOOOH*>*(*)())((::PBYTE)hIl2Cpp + CLDLKNMOOOH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDLKNMOOOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CLDLKNMOOOH* Clone()
		{
			return ((::CLDLKNMOOOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDLKNMOOOH_CLONE_OFFSET))(this);
		}

		::System::UInt32 AJMHIGMJHEO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDLKNMOOOH_AJMHIGMJHEO_OFFSET))(this);
		}

		::System::Void MIIDDOBHAHH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLDLKNMOOOH_MIIDDOBHAHH_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDLKNMOOOH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLDLKNMOOOH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::NNPGLCGNICI* BLBBMAGLFDL()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDLKNMOOOH_BLBBMAGLFDL_OFFSET))(this);
		}

		::System::Void MGBKGAPDHLG(::NNPGLCGNICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNPGLCGNICI*))((::PBYTE)hIl2Cpp + CLDLKNMOOOH_MGBKGAPDHLG_OFFSET))(this, a1);
		}

		::ACKNOAAIMPC KPCGBGLFFMI()
		{
			return ((::ACKNOAAIMPC(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDLKNMOOOH_KPCGBGLFFMI_OFFSET))(this);
		}

		::System::Void ENKJEHPJOCB(::ACKNOAAIMPC a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACKNOAAIMPC))((::PBYTE)hIl2Cpp + CLDLKNMOOOH_ENKJEHPJOCB_OFFSET))(this, a1);
		}

		::System::UInt32 OEKGBNJKFKC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDLKNMOOOH_OEKGBNJKFKC_OFFSET))(this);
		}

		::System::Void IEGPFEIKGJE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLDLKNMOOOH_IEGPFEIKGJE_OFFSET))(this, a1);
		}

		::System::UInt32 OJEHFFGHICH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDLKNMOOOH_OJEHFFGHICH_OFFSET))(this);
		}

		::System::Void BBAJPOHLCNK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLDLKNMOOOH_BBAJPOHLCNK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLDLKNMOOOH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CLDLKNMOOOH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CLDLKNMOOOH*))((::PBYTE)hIl2Cpp + CLDLKNMOOOH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDLKNMOOOH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDLKNMOOOH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLDLKNMOOOH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDLKNMOOOH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CLDLKNMOOOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLDLKNMOOOH*))((::PBYTE)hIl2Cpp + CLDLKNMOOOH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLDLKNMOOOH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
