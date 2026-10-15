#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIGMJINJFJC;
class NNPGLCGNICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GIGMJINJFJC_BLBBMAGLFDL_OFFSET UNITYSDK_OFFSET(0x1E4697E0)
#define GIGMJINJFJC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E469CB0)
#define GIGMJINJFJC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E469FA0)
#define GIGMJINJFJC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E469760)
#define GIGMJINJFJC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4696F0)
#define GIGMJINJFJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4696E0)
#define GIGMJINJFJC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4699A0)
#define GIGMJINJFJC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E469820)
#define GIGMJINJFJC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E469810)
#define GIGMJINJFJC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E469B20)
#define GIGMJINJFJC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4696A0)
#define GIGMJINJFJC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E469E00)
#define GIGMJINJFJC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E469D80)
#define GIGMJINJFJC_MGBKGAPDHLG_OFFSET UNITYSDK_OFFSET(0x1E4697F0)
#define GIGMJINJFJC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E469800)
#define GIGMJINJFJC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4696D0)
#define GIGMJINJFJC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E469B70)
#define GIGMJINJFJC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E469BD0)

inline static constexpr unsigned int GIGMJINJFJC_TypeDefinitionIndex = 28449;

	class GIGMJINJFJC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NNPGLCGNICI* LKDEFKKLEDJ; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GIGMJINJFJC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GIGMJINJFJC*>**)UnitySDK::FromName("", "GIGMJINJFJC")->GetStaticField(0x188C0);
		}

		// static const ::System::Object HNBHJOFPFLM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGMJINJFJC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GIGMJINJFJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIGMJINJFJC*))((::PBYTE)hIl2Cpp + GIGMJINJFJC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIGMJINJFJC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GIGMJINJFJC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GIGMJINJFJC*>*(*)())((::PBYTE)hIl2Cpp + GIGMJINJFJC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGMJINJFJC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GIGMJINJFJC* Clone()
		{
			return ((::GIGMJINJFJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGMJINJFJC_CLONE_OFFSET))(this);
		}

		::NNPGLCGNICI* BLBBMAGLFDL()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGMJINJFJC_BLBBMAGLFDL_OFFSET))(this);
		}

		::System::Void MGBKGAPDHLG(::NNPGLCGNICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNPGLCGNICI*))((::PBYTE)hIl2Cpp + GIGMJINJFJC_MGBKGAPDHLG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGMJINJFJC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIGMJINJFJC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GIGMJINJFJC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GIGMJINJFJC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GIGMJINJFJC*))((::PBYTE)hIl2Cpp + GIGMJINJFJC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGMJINJFJC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGMJINJFJC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GIGMJINJFJC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGMJINJFJC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GIGMJINJFJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIGMJINJFJC*))((::PBYTE)hIl2Cpp + GIGMJINJFJC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GIGMJINJFJC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
