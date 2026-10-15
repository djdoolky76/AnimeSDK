#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIEGKBMFNMJ;
class NNPGLCGNICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HIEGKBMFNMJ_BLBBMAGLFDL_OFFSET UNITYSDK_OFFSET(0x1E564020)
#define HIEGKBMFNMJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5644F0)
#define HIEGKBMFNMJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5647E0)
#define HIEGKBMFNMJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E563FA0)
#define HIEGKBMFNMJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E563F30)
#define HIEGKBMFNMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E563F20)
#define HIEGKBMFNMJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5641E0)
#define HIEGKBMFNMJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E564060)
#define HIEGKBMFNMJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E564050)
#define HIEGKBMFNMJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E564360)
#define HIEGKBMFNMJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E563EE0)
#define HIEGKBMFNMJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E564640)
#define HIEGKBMFNMJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5645C0)
#define HIEGKBMFNMJ_MGBKGAPDHLG_OFFSET UNITYSDK_OFFSET(0x1E564030)
#define HIEGKBMFNMJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E564040)
#define HIEGKBMFNMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E563F10)
#define HIEGKBMFNMJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5643B0)
#define HIEGKBMFNMJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E564410)

inline static constexpr unsigned int HIEGKBMFNMJ_TypeDefinitionIndex = 28386;

	class HIEGKBMFNMJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NNPGLCGNICI* LKDEFKKLEDJ; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HIEGKBMFNMJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HIEGKBMFNMJ*>**)UnitySDK::FromName("", "HIEGKBMFNMJ")->GetStaticField(0x33750);
		}

		// static const ::System::Object HNBHJOFPFLM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEGKBMFNMJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HIEGKBMFNMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIEGKBMFNMJ*))((::PBYTE)hIl2Cpp + HIEGKBMFNMJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIEGKBMFNMJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HIEGKBMFNMJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HIEGKBMFNMJ*>*(*)())((::PBYTE)hIl2Cpp + HIEGKBMFNMJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEGKBMFNMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HIEGKBMFNMJ* Clone()
		{
			return ((::HIEGKBMFNMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEGKBMFNMJ_CLONE_OFFSET))(this);
		}

		::NNPGLCGNICI* BLBBMAGLFDL()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEGKBMFNMJ_BLBBMAGLFDL_OFFSET))(this);
		}

		::System::Void MGBKGAPDHLG(::NNPGLCGNICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNPGLCGNICI*))((::PBYTE)hIl2Cpp + HIEGKBMFNMJ_MGBKGAPDHLG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEGKBMFNMJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HIEGKBMFNMJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIEGKBMFNMJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HIEGKBMFNMJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIEGKBMFNMJ*))((::PBYTE)hIl2Cpp + HIEGKBMFNMJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEGKBMFNMJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEGKBMFNMJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HIEGKBMFNMJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEGKBMFNMJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HIEGKBMFNMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIEGKBMFNMJ*))((::PBYTE)hIl2Cpp + HIEGKBMFNMJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HIEGKBMFNMJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
