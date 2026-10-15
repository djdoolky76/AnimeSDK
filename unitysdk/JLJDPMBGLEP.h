#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLJDPMBGLEP;
class KJMKOJEHMII;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JLJDPMBGLEP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E74F380)
#define JLJDPMBGLEP_CCGBDLMNMMH_OFFSET UNITYSDK_OFFSET(0x1E74EF10)
#define JLJDPMBGLEP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E74F710)
#define JLJDPMBGLEP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E74EEB0)
#define JLJDPMBGLEP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E74EDE0)
#define JLJDPMBGLEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E74ED90)
#define JLJDPMBGLEP_DGBALGDBANK_OFFSET UNITYSDK_OFFSET(0x1E74EF00)
#define JLJDPMBGLEP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E74EF70)
#define JLJDPMBGLEP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E74EF40)
#define JLJDPMBGLEP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E74EEF0)
#define JLJDPMBGLEP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E74F0D0)
#define JLJDPMBGLEP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E74ED50)
#define JLJDPMBGLEP_KABFBPPJBCD_OFFSET UNITYSDK_OFFSET(0x1E74EF20)
#define JLJDPMBGLEP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E74F5E0)
#define JLJDPMBGLEP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E74F540)
#define JLJDPMBGLEP_NGBKJOKKIPI_OFFSET UNITYSDK_OFFSET(0x1E74EF30)
#define JLJDPMBGLEP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E74EEE0)
#define JLJDPMBGLEP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E74ED80)
#define JLJDPMBGLEP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E74F160)
#define JLJDPMBGLEP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E74F1C0)

inline static constexpr unsigned int JLJDPMBGLEP_TypeDefinitionIndex = 34940;

	class JLJDPMBGLEP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* CMPKKONPMMK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::KJMKOJEHMII*>* BFEICFIAMJG; // 0x20
		::System::UInt32 NNDMOKPCKBM; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x2C
		static ::System::Object** StaticGet_BEHIBABLPFO()
		{
			return (::System::Object**)UnitySDK::FromName("", "JLJDPMBGLEP")->GetStaticField(0x646D0);
		}

		static ::Google::Protobuf::MessageParser_1<::JLJDPMBGLEP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JLJDPMBGLEP*>**)UnitySDK::FromName("", "JLJDPMBGLEP")->GetStaticField(0x646D8);
		}

		static ::System::Object** StaticGet_JLAKAJHINJE()
		{
			return (::System::Object**)UnitySDK::FromName("", "JLJDPMBGLEP")->GetStaticField(0x646E0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object LGOFFDGDFNE; // 0x0
		// static const ::System::Object MLHIICBPKLI; // 0x0
		// static const ::System::Object OMJDJAJHLJK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJDPMBGLEP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JLJDPMBGLEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLJDPMBGLEP*))((::PBYTE)hIl2Cpp + JLJDPMBGLEP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLJDPMBGLEP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JLJDPMBGLEP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JLJDPMBGLEP*>*(*)())((::PBYTE)hIl2Cpp + JLJDPMBGLEP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJDPMBGLEP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JLJDPMBGLEP* Clone()
		{
			return ((::JLJDPMBGLEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJDPMBGLEP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJDPMBGLEP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLJDPMBGLEP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 DGBALGDBANK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJDPMBGLEP_DGBALGDBANK_OFFSET))(this);
		}

		::System::Void CCGBDLMNMMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLJDPMBGLEP_CCGBDLMNMMH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* KABFBPPJBCD()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJDPMBGLEP_KABFBPPJBCD_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::KJMKOJEHMII*>* NGBKJOKKIPI()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::KJMKOJEHMII*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJDPMBGLEP_NGBKJOKKIPI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLJDPMBGLEP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JLJDPMBGLEP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JLJDPMBGLEP*))((::PBYTE)hIl2Cpp + JLJDPMBGLEP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJDPMBGLEP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJDPMBGLEP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JLJDPMBGLEP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJDPMBGLEP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JLJDPMBGLEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLJDPMBGLEP*))((::PBYTE)hIl2Cpp + JLJDPMBGLEP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JLJDPMBGLEP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
