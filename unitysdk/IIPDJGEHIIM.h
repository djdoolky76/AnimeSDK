#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNMCIEPEBPK;
class IIPDJGEHIIM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IIPDJGEHIIM_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E68E6B0)
#define IIPDJGEHIIM_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E68E6C0)
#define IIPDJGEHIIM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E68EB70)
#define IIPDJGEHIIM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E68F020)
#define IIPDJGEHIIM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E68E620)
#define IIPDJGEHIIM_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E68E730)
#define IIPDJGEHIIM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E68E5A0)
#define IIPDJGEHIIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E68E590)
#define IIPDJGEHIIM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E68E7D0)
#define IIPDJGEHIIM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E68E750)
#define IIPDJGEHIIM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E68E720)
#define IIPDJGEHIIM_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E68E740)
#define IIPDJGEHIIM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E68E8D0)
#define IIPDJGEHIIM_GNKDGCKMCIM_OFFSET UNITYSDK_OFFSET(0x1E68E6D0)
#define IIPDJGEHIIM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E68E550)
#define IIPDJGEHIIM_LKBKNGLMAMN_OFFSET UNITYSDK_OFFSET(0x1E68E6F0)
#define IIPDJGEHIIM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E68EED0)
#define IIPDJGEHIIM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E68EDB0)
#define IIPDJGEHIIM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E68E710)
#define IIPDJGEHIIM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E68E580)
#define IIPDJGEHIIM_PEMFMJGHPLL_OFFSET UNITYSDK_OFFSET(0x1E68E6E0)
#define IIPDJGEHIIM_PNJCLMCJHBE_OFFSET UNITYSDK_OFFSET(0x1E68E700)
#define IIPDJGEHIIM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E68E920)
#define IIPDJGEHIIM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E68E980)

	class IIPDJGEHIIM : public ::System::Object
	{
	public:
		::GNMCIEPEBPK* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 HJPCMINMFBI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		::System::UInt32 ACDLLCLBIND; // 0x28
		::System::UInt32 LJDBCGPFFDH; // 0x2C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IIPDJGEHIIM")->GetStaticField(0x51A50);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object JMEKEJMJFPK; // 0x0
		// static const ::System::Object ACLGGLDCAEC; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPDJGEHIIM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IIPDJGEHIIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIPDJGEHIIM*))((::PBYTE)hIl2Cpp + IIPDJGEHIIM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIPDJGEHIIM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IIPDJGEHIIM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPDJGEHIIM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IIPDJGEHIIM* Clone()
		{
			return ((::IIPDJGEHIIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPDJGEHIIM_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPDJGEHIIM_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IIPDJGEHIIM_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::UInt32 GNKDGCKMCIM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPDJGEHIIM_GNKDGCKMCIM_OFFSET))(this);
		}

		::System::Void PEMFMJGHPLL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IIPDJGEHIIM_PEMFMJGHPLL_OFFSET))(this, a1);
		}

		::System::UInt32 LKBKNGLMAMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPDJGEHIIM_LKBKNGLMAMN_OFFSET))(this);
		}

		::System::Void PNJCLMCJHBE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IIPDJGEHIIM_PNJCLMCJHBE_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPDJGEHIIM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IIPDJGEHIIM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::GNMCIEPEBPK* CPCEGCCEMIM()
		{
			return ((::GNMCIEPEBPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPDJGEHIIM_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::GNMCIEPEBPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNMCIEPEBPK*))((::PBYTE)hIl2Cpp + IIPDJGEHIIM_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IIPDJGEHIIM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IIPDJGEHIIM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IIPDJGEHIIM*))((::PBYTE)hIl2Cpp + IIPDJGEHIIM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPDJGEHIIM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPDJGEHIIM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IIPDJGEHIIM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPDJGEHIIM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IIPDJGEHIIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIPDJGEHIIM*))((::PBYTE)hIl2Cpp + IIPDJGEHIIM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IIPDJGEHIIM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
