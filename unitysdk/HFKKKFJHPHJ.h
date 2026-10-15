#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFKKKFJHPHJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HFKKKFJHPHJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E56ECE0)
#define HFKKKFJHPHJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E56F040)
#define HFKKKFJHPHJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E56E4A0)
#define HFKKKFJHPHJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E56E460)
#define HFKKKFJHPHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E56E450)
#define HFKKKFJHPHJ_DIJBMAOPGOB_OFFSET UNITYSDK_OFFSET(0x1E56E560)
#define HFKKKFJHPHJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E56E5E0)
#define HFKKKFJHPHJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E56E580)
#define HFKKKFJHPHJ_FCHEMONJFGI_OFFSET UNITYSDK_OFFSET(0x1E56E520)
#define HFKKKFJHPHJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E56E8C0)
#define HFKKKFJHPHJ_GNBIPGJGOAJ_OFFSET UNITYSDK_OFFSET(0x1E56E550)
#define HFKKKFJHPHJ_INAFIFPJOLB_OFFSET UNITYSDK_OFFSET(0x1E56E570)
#define HFKKKFJHPHJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E56E3E0)
#define HFKKKFJHPHJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E56EE10)
#define HFKKKFJHPHJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E56EDA0)
#define HFKKKFJHPHJ_NBLLLFIFBLL_OFFSET UNITYSDK_OFFSET(0x1E56E530)
#define HFKKKFJHPHJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E56E440)
#define HFKKKFJHPHJ_PJLEOJKPGAJ_OFFSET UNITYSDK_OFFSET(0x1E56E540)
#define HFKKKFJHPHJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E56EB10)
#define HFKKKFJHPHJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E56EB70)

inline static constexpr unsigned int HFKKKFJHPHJ_TypeDefinitionIndex = 25635;

	class HFKKKFJHPHJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Double BCLKCLDFMOA; // 0x18
		::System::Double LEOIDKJCJML; // 0x20
		::System::UInt32 BGGMKOBGPDA; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HFKKKFJHPHJ")->GetStaticField(0x35BA0);
		}

		// static const ::System::Object NLAHKDAONBF; // 0x0
		// static const ::System::Object IBJNBJNDPIK; // 0x0
		// static const ::System::Object PHKNMPELNOL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKKKFJHPHJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HFKKKFJHPHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFKKKFJHPHJ*))((::PBYTE)hIl2Cpp + HFKKKFJHPHJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFKKKFJHPHJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HFKKKFJHPHJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKKKFJHPHJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HFKKKFJHPHJ* Clone()
		{
			return ((::HFKKKFJHPHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKKKFJHPHJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 FCHEMONJFGI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKKKFJHPHJ_FCHEMONJFGI_OFFSET))(this);
		}

		::System::Void NBLLLFIFBLL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HFKKKFJHPHJ_NBLLLFIFBLL_OFFSET))(this, a1);
		}

		::System::Double PJLEOJKPGAJ()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKKKFJHPHJ_PJLEOJKPGAJ_OFFSET))(this);
		}

		::System::Void GNBIPGJGOAJ(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + HFKKKFJHPHJ_GNBIPGJGOAJ_OFFSET))(this, a1);
		}

		::System::Double DIJBMAOPGOB()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKKKFJHPHJ_DIJBMAOPGOB_OFFSET))(this);
		}

		::System::Void INAFIFPJOLB(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + HFKKKFJHPHJ_INAFIFPJOLB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFKKKFJHPHJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HFKKKFJHPHJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HFKKKFJHPHJ*))((::PBYTE)hIl2Cpp + HFKKKFJHPHJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKKKFJHPHJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKKKFJHPHJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HFKKKFJHPHJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKKKFJHPHJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HFKKKFJHPHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFKKKFJHPHJ*))((::PBYTE)hIl2Cpp + HFKKKFJHPHJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HFKKKFJHPHJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
