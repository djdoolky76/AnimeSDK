#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGHGKLIAKLL;
class NNPGLCGNICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KGHGKLIAKLL_BLBBMAGLFDL_OFFSET UNITYSDK_OFFSET(0x1E80A270)
#define KGHGKLIAKLL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E80A710)
#define KGHGKLIAKLL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E80AA00)
#define KGHGKLIAKLL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E80A1D0)
#define KGHGKLIAKLL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E80A160)
#define KGHGKLIAKLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E80A150)
#define KGHGKLIAKLL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E80A410)
#define KGHGKLIAKLL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E80A290)
#define KGHGKLIAKLL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E80A260)
#define KGHGKLIAKLL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E80A590)
#define KGHGKLIAKLL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E80A110)
#define KGHGKLIAKLL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E80A860)
#define KGHGKLIAKLL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E80A7E0)
#define KGHGKLIAKLL_MGBKGAPDHLG_OFFSET UNITYSDK_OFFSET(0x1E80A280)
#define KGHGKLIAKLL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E80A250)
#define KGHGKLIAKLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E80A140)
#define KGHGKLIAKLL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E80A5D0)
#define KGHGKLIAKLL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E80A630)

inline static constexpr unsigned int KGHGKLIAKLL_TypeDefinitionIndex = 33796;

	class KGHGKLIAKLL : public ::System::Object
	{
	public:
		::NNPGLCGNICI* LKDEFKKLEDJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KGHGKLIAKLL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KGHGKLIAKLL*>**)UnitySDK::FromName("", "KGHGKLIAKLL")->GetStaticField(0x15070);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HNBHJOFPFLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHGKLIAKLL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KGHGKLIAKLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGHGKLIAKLL*))((::PBYTE)hIl2Cpp + KGHGKLIAKLL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGHGKLIAKLL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KGHGKLIAKLL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KGHGKLIAKLL*>*(*)())((::PBYTE)hIl2Cpp + KGHGKLIAKLL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHGKLIAKLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KGHGKLIAKLL* Clone()
		{
			return ((::KGHGKLIAKLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHGKLIAKLL_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHGKLIAKLL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGHGKLIAKLL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::NNPGLCGNICI* BLBBMAGLFDL()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHGKLIAKLL_BLBBMAGLFDL_OFFSET))(this);
		}

		::System::Void MGBKGAPDHLG(::NNPGLCGNICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNPGLCGNICI*))((::PBYTE)hIl2Cpp + KGHGKLIAKLL_MGBKGAPDHLG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KGHGKLIAKLL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KGHGKLIAKLL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KGHGKLIAKLL*))((::PBYTE)hIl2Cpp + KGHGKLIAKLL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHGKLIAKLL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHGKLIAKLL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KGHGKLIAKLL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHGKLIAKLL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KGHGKLIAKLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGHGKLIAKLL*))((::PBYTE)hIl2Cpp + KGHGKLIAKLL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KGHGKLIAKLL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
