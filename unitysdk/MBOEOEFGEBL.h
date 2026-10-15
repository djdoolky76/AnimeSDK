#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBOEOEFGEBL_HALHGCHBNOK.h"
#include "unitysdk/System/Object.h"
class MBOEOEFGEBL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MBOEOEFGEBL_BBIDGLKIHDE_OFFSET UNITYSDK_OFFSET(0x1E9EC7C0)
#define MBOEOEFGEBL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9ECF20)
#define MBOEOEFGEBL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9ED480)
#define MBOEOEFGEBL_CLLIBMIFPNA_OFFSET UNITYSDK_OFFSET(0x1E9EC820)
#define MBOEOEFGEBL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9EC7F0)
#define MBOEOEFGEBL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9EC530)
#define MBOEOEFGEBL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9EC520)
#define MBOEOEFGEBL_EMPCONOHHGH_OFFSET UNITYSDK_OFFSET(0x1E9EC740)
#define MBOEOEFGEBL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9EC890)
#define MBOEOEFGEBL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9EC860)
#define MBOEOEFGEBL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9ECB90)
#define MBOEOEFGEBL_GNCMNBHMIPE_OFFSET UNITYSDK_OFFSET(0x1E9EC850)
#define MBOEOEFGEBL_JBBMHOFGHGA_OFFSET UNITYSDK_OFFSET(0x1E9EC830)
#define MBOEOEFGEBL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9EC4E0)
#define MBOEOEFGEBL_KECEFHGCBGH_OFFSET UNITYSDK_OFFSET(0x1E9EC690)
#define MBOEOEFGEBL_KFLDFIGDABN_OFFSET UNITYSDK_OFFSET(0x1E9EC840)
#define MBOEOEFGEBL_KIJINHPMFJC_OFFSET UNITYSDK_OFFSET(0x1E9EC710)
#define MBOEOEFGEBL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9ED2A0)
#define MBOEOEFGEBL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9ED130)
#define MBOEOEFGEBL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9EC510)
#define MBOEOEFGEBL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9ECC50)
#define MBOEOEFGEBL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9ECCB0)

inline static constexpr unsigned int MBOEOEFGEBL_TypeDefinitionIndex = 27577;

	class MBOEOEFGEBL : public ::System::Object
	{
	public:
		::System::Object* JEFEMOPFJOP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean AIGHAPALCNE; // 0x20
		::System::Byte _padding0[0x3];
		::MBOEOEFGEBL_HALHGCHBNOK NPIBMNININN; // 0x24
		static ::Google::Protobuf::MessageParser_1<::MBOEOEFGEBL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MBOEOEFGEBL*>**)UnitySDK::FromName("", "MBOEOEFGEBL")->GetStaticField(0x45DD0);
		}

		// static const ::System::Object HBDALMDHLKJ; // 0x0
		// static const ::System::Object IIKDJEJFAOG; // 0x0
		// static const ::System::Object DGKENOLAFMK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOEOEFGEBL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MBOEOEFGEBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBOEOEFGEBL*))((::PBYTE)hIl2Cpp + MBOEOEFGEBL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBOEOEFGEBL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MBOEOEFGEBL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MBOEOEFGEBL*>*(*)())((::PBYTE)hIl2Cpp + MBOEOEFGEBL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOEOEFGEBL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MBOEOEFGEBL* Clone()
		{
			return ((::MBOEOEFGEBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOEOEFGEBL_CLONE_OFFSET))(this);
		}

		::System::Boolean CLLIBMIFPNA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOEOEFGEBL_CLLIBMIFPNA_OFFSET))(this);
		}

		::System::Void JBBMHOFGHGA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MBOEOEFGEBL_JBBMHOFGHGA_OFFSET))(this, a1);
		}

		::System::UInt32 KECEFHGCBGH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOEOEFGEBL_KECEFHGCBGH_OFFSET))(this);
		}

		::System::Void KIJINHPMFJC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MBOEOEFGEBL_KIJINHPMFJC_OFFSET))(this, a1);
		}

		::System::UInt32 EMPCONOHHGH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOEOEFGEBL_EMPCONOHHGH_OFFSET))(this);
		}

		::System::Void BBIDGLKIHDE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MBOEOEFGEBL_BBIDGLKIHDE_OFFSET))(this, a1);
		}

		::MBOEOEFGEBL_HALHGCHBNOK KFLDFIGDABN()
		{
			return ((::MBOEOEFGEBL_HALHGCHBNOK(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOEOEFGEBL_KFLDFIGDABN_OFFSET))(this);
		}

		::System::Void GNCMNBHMIPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOEOEFGEBL_GNCMNBHMIPE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MBOEOEFGEBL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MBOEOEFGEBL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MBOEOEFGEBL*))((::PBYTE)hIl2Cpp + MBOEOEFGEBL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOEOEFGEBL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOEOEFGEBL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MBOEOEFGEBL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOEOEFGEBL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MBOEOEFGEBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBOEOEFGEBL*))((::PBYTE)hIl2Cpp + MBOEOEFGEBL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MBOEOEFGEBL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
