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

#define FIIJNPBFJBG_BKKPDENEIOP_OFFSET UNITYSDK_OFFSET(0x2069D7E0)
#define FIIJNPBFJBG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2069DC70)
#define FIIJNPBFJBG_CCTOR_OFFSET UNITYSDK_OFFSET(0x2069E010)
#define FIIJNPBFJBG_CLONE_OFFSET UNITYSDK_OFFSET(0x2069D750)
#define FIIJNPBFJBG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2069D650)
#define FIIJNPBFJBG_CTOR_OFFSET UNITYSDK_OFFSET(0x2069D5E0)
#define FIIJNPBFJBG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2069D860)
#define FIIJNPBFJBG_EQUALS_OFFSET UNITYSDK_OFFSET(0x2069D800)
#define FIIJNPBFJBG_FDOLAGFBFNC_OFFSET UNITYSDK_OFFSET(0x2069D7F0)
#define FIIJNPBFJBG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2069D9C0)
#define FIIJNPBFJBG_GPIEOJAEKMD_OFFSET UNITYSDK_OFFSET(0x2069D7B0)
#define FIIJNPBFJBG_HFMEDKFKDLC_OFFSET UNITYSDK_OFFSET(0x2069D7A0)
#define FIIJNPBFJBG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2069D570)
#define FIIJNPBFJBG_LOFPHMJLFJD_OFFSET UNITYSDK_OFFSET(0x2069D7C0)
#define FIIJNPBFJBG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2069DED0)
#define FIIJNPBFJBG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2069DE30)
#define FIIJNPBFJBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2069D5D0)
#define FIIJNPBFJBG_PGAEKMPHIOK_OFFSET UNITYSDK_OFFSET(0x2069D7D0)
#define FIIJNPBFJBG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2069DA50)
#define FIIJNPBFJBG_WRITETO_OFFSET UNITYSDK_OFFSET(0x2069DAB0)

inline static constexpr unsigned int FIIJNPBFJBG_TypeDefinitionIndex = 29904;

	class FIIJNPBFJBG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* IIKCNHHENJO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* ABHLIFEAGIG; // 0x20
		::System::UInt32 MHMDNAJBBIK; // 0x28
		::System::UInt32 MJBKOAFCFNE; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::FIIJNPBFJBG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FIIJNPBFJBG*>**)UnitySDK::FromName("", "FIIJNPBFJBG")->GetStaticField(0x437D0);
		}

		static ::System::Object** StaticGet_NHNLMKGMPNB()
		{
			return (::System::Object**)UnitySDK::FromName("", "FIIJNPBFJBG")->GetStaticField(0x437D8);
		}

		static ::System::Object** StaticGet_KCIGALIANDI()
		{
			return (::System::Object**)UnitySDK::FromName("", "FIIJNPBFJBG")->GetStaticField(0x437E0);
		}

		// static const ::System::Object HMPOPDNNFOB; // 0x0
		// static const ::System::Object HKCOCPCBMEA; // 0x0
		// static const ::System::Object JHOLLGPADFG; // 0x0
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

		::System::UInt32 LOFPHMJLFJD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIIJNPBFJBG_LOFPHMJLFJD_OFFSET))(this);
		}

		::System::Void PGAEKMPHIOK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FIIJNPBFJBG_PGAEKMPHIOK_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* BKKPDENEIOP()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIIJNPBFJBG_BKKPDENEIOP_OFFSET))(this);
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
