#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBDLJKEBPHM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FBDLJKEBPHM_APPPOHDNCFL_OFFSET UNITYSDK_OFFSET(0x1E3323F0)
#define FBDLJKEBPHM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3327B0)
#define FBDLJKEBPHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E332BA0)
#define FBDLJKEBPHM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E332310)
#define FBDLJKEBPHM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3322A0)
#define FBDLJKEBPHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E332270)
#define FBDLJKEBPHM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3324A0)
#define FBDLJKEBPHM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E332400)
#define FBDLJKEBPHM_GAEJCNLBMOG_OFFSET UNITYSDK_OFFSET(0x1E3323C0)
#define FBDLJKEBPHM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3325A0)
#define FBDLJKEBPHM_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0x1E3323E0)
#define FBDLJKEBPHM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E332200)
#define FBDLJKEBPHM_LEIJGCHEPEF_OFFSET UNITYSDK_OFFSET(0x1E3323B0)
#define FBDLJKEBPHM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3329B0)
#define FBDLJKEBPHM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E332950)
#define FBDLJKEBPHM_NHNGGGEBOAC_OFFSET UNITYSDK_OFFSET(0x1E3323D0)
#define FBDLJKEBPHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E332260)
#define FBDLJKEBPHM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3325F0)
#define FBDLJKEBPHM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E332650)

inline static constexpr unsigned int FBDLJKEBPHM_TypeDefinitionIndex = 29304;

	class FBDLJKEBPHM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* EEPEDKOGGLO; // 0x18
		::System::UInt32 HIOHMLINHPC; // 0x20
		::System::UInt32 PPNELLDGNPC; // 0x24
		static ::System::Object** StaticGet_HKNJOJGJMOA()
		{
			return (::System::Object**)UnitySDK::FromName("", "FBDLJKEBPHM")->GetStaticField(0x59140);
		}

		static ::Google::Protobuf::MessageParser_1<::FBDLJKEBPHM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FBDLJKEBPHM*>**)UnitySDK::FromName("", "FBDLJKEBPHM")->GetStaticField(0x59148);
		}

		// static const ::System::Object NLABLEJNOCI; // 0x0
		// static const ::System::Object MIFCIPEBBEN; // 0x0
		// static const ::System::Object GLIJLPOGDAK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBDLJKEBPHM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FBDLJKEBPHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBDLJKEBPHM*))((::PBYTE)hIl2Cpp + FBDLJKEBPHM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBDLJKEBPHM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FBDLJKEBPHM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FBDLJKEBPHM*>*(*)())((::PBYTE)hIl2Cpp + FBDLJKEBPHM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBDLJKEBPHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FBDLJKEBPHM* Clone()
		{
			return ((::FBDLJKEBPHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBDLJKEBPHM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* LEIJGCHEPEF()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBDLJKEBPHM_LEIJGCHEPEF_OFFSET))(this);
		}

		::System::UInt32 GAEJCNLBMOG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBDLJKEBPHM_GAEJCNLBMOG_OFFSET))(this);
		}

		::System::Void NHNGGGEBOAC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBDLJKEBPHM_NHNGGGEBOAC_OFFSET))(this, a1);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBDLJKEBPHM_IIILLEPDBCJ_OFFSET))(this);
		}

		::System::Void APPPOHDNCFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBDLJKEBPHM_APPPOHDNCFL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBDLJKEBPHM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FBDLJKEBPHM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBDLJKEBPHM*))((::PBYTE)hIl2Cpp + FBDLJKEBPHM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBDLJKEBPHM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBDLJKEBPHM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FBDLJKEBPHM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBDLJKEBPHM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FBDLJKEBPHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBDLJKEBPHM*))((::PBYTE)hIl2Cpp + FBDLJKEBPHM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FBDLJKEBPHM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
