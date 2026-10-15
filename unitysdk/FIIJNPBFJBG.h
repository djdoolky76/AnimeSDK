#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIIJNPBFJBG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FIIJNPBFJBG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E36ABA0)
#define FIIJNPBFJBG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E36AF00)
#define FIIJNPBFJBG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E36A680)
#define FIIJNPBFJBG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E36A5C0)
#define FIIJNPBFJBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E36A570)
#define FIIJNPBFJBG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E36A890)
#define FIIJNPBFJBG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E36A700)
#define FIIJNPBFJBG_FDOLAGFBFNC_OFFSET UNITYSDK_OFFSET(0x1E36A6F0)
#define FIIJNPBFJBG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E36A9C0)
#define FIIJNPBFJBG_GPIEOJAEKMD_OFFSET UNITYSDK_OFFSET(0x1E36A6E0)
#define FIIJNPBFJBG_HFMEDKFKDLC_OFFSET UNITYSDK_OFFSET(0x1E36A6D0)
#define FIIJNPBFJBG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E36A500)
#define FIIJNPBFJBG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E36AD30)
#define FIIJNPBFJBG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E36ACB0)
#define FIIJNPBFJBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E36A560)
#define FIIJNPBFJBG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E36AA30)
#define FIIJNPBFJBG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E36AA90)

inline static constexpr unsigned int FIIJNPBFJBG_TypeDefinitionIndex = 29247;

	class FIIJNPBFJBG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* ABHLIFEAGIG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 MJBKOAFCFNE; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FIIJNPBFJBG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FIIJNPBFJBG*>**)UnitySDK::FromName("", "FIIJNPBFJBG")->GetStaticField(0x57A60);
		}

		static ::System::Object** StaticGet_NHNLMKGMPNB()
		{
			return (::System::Object**)UnitySDK::FromName("", "FIIJNPBFJBG")->GetStaticField(0x57A68);
		}

		// static const ::System::Object HMPOPDNNFOB; // 0x0
		// static const ::System::Object JCGCCDCNBDN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIIJNPBFJBG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FIIJNPBFJBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIIJNPBFJBG*))((::PBYTE)hIl2Cpp + FIIJNPBFJBG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIIJNPBFJBG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FIIJNPBFJBG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FIIJNPBFJBG*>*(*)())((::PBYTE)hIl2Cpp + FIIJNPBFJBG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIIJNPBFJBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FIIJNPBFJBG* Clone()
		{
			return ((::FIIJNPBFJBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIIJNPBFJBG_CLONE_OFFSET))(this);
		}

		::System::UInt32 HFMEDKFKDLC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIIJNPBFJBG_HFMEDKFKDLC_OFFSET))(this);
		}

		::System::Void GPIEOJAEKMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FIIJNPBFJBG_GPIEOJAEKMD_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* FDOLAGFBFNC()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIIJNPBFJBG_FDOLAGFBFNC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FIIJNPBFJBG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FIIJNPBFJBG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FIIJNPBFJBG*))((::PBYTE)hIl2Cpp + FIIJNPBFJBG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIIJNPBFJBG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIIJNPBFJBG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FIIJNPBFJBG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIIJNPBFJBG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FIIJNPBFJBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIIJNPBFJBG*))((::PBYTE)hIl2Cpp + FIIJNPBFJBG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FIIJNPBFJBG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
