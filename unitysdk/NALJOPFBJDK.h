#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NALJOPFBJDK;
class NPIJFFFFKBK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NALJOPFBJDK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAC5CE0)
#define NALJOPFBJDK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC60A0)
#define NALJOPFBJDK_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAC5790)
#define NALJOPFBJDK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAC5720)
#define NALJOPFBJDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC5710)
#define NALJOPFBJDK_EMLCAKJEFLC_OFFSET UNITYSDK_OFFSET(0x1EAC5810)
#define NALJOPFBJDK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAC59D0)
#define NALJOPFBJDK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAC5850)
#define NALJOPFBJDK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EAC5840)
#define NALJOPFBJDK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAC5B50)
#define NALJOPFBJDK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAC56D0)
#define NALJOPFBJDK_KKOLIFGKJAO_OFFSET UNITYSDK_OFFSET(0x1EAC5820)
#define NALJOPFBJDK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAC5EC0)
#define NALJOPFBJDK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAC5DB0)
#define NALJOPFBJDK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EAC5830)
#define NALJOPFBJDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAC5700)
#define NALJOPFBJDK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAC5BA0)
#define NALJOPFBJDK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAC5C00)

inline static constexpr unsigned int NALJOPFBJDK_TypeDefinitionIndex = 27908;

	class NALJOPFBJDK : public ::System::Object
	{
	public:
		::NPIJFFFFKBK* FPOBAIOBMDK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NALJOPFBJDK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NALJOPFBJDK*>**)UnitySDK::FromName("", "NALJOPFBJDK")->GetStaticField(0x5C8A0);
		}

		// static const ::System::Object NEEILLMPGMC; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NALJOPFBJDK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NALJOPFBJDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NALJOPFBJDK*))((::PBYTE)hIl2Cpp + NALJOPFBJDK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NALJOPFBJDK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NALJOPFBJDK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NALJOPFBJDK*>*(*)())((::PBYTE)hIl2Cpp + NALJOPFBJDK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NALJOPFBJDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NALJOPFBJDK* Clone()
		{
			return ((::NALJOPFBJDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NALJOPFBJDK_CLONE_OFFSET))(this);
		}

		::NPIJFFFFKBK* EMLCAKJEFLC()
		{
			return ((::NPIJFFFFKBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NALJOPFBJDK_EMLCAKJEFLC_OFFSET))(this);
		}

		::System::Void KKOLIFGKJAO(::NPIJFFFFKBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPIJFFFFKBK*))((::PBYTE)hIl2Cpp + NALJOPFBJDK_KKOLIFGKJAO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NALJOPFBJDK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NALJOPFBJDK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NALJOPFBJDK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NALJOPFBJDK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NALJOPFBJDK*))((::PBYTE)hIl2Cpp + NALJOPFBJDK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NALJOPFBJDK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NALJOPFBJDK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NALJOPFBJDK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NALJOPFBJDK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NALJOPFBJDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NALJOPFBJDK*))((::PBYTE)hIl2Cpp + NALJOPFBJDK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NALJOPFBJDK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
