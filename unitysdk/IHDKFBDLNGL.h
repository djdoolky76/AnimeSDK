#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHDKFBDLNGL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IHDKFBDLNGL_AHKGGIPOLEO_OFFSET UNITYSDK_OFFSET(0x1F97AA80)
#define IHDKFBDLNGL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F97ADC0)
#define IHDKFBDLNGL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F97B150)
#define IHDKFBDLNGL_CLONE_OFFSET UNITYSDK_OFFSET(0x1F97A9D0)
#define IHDKFBDLNGL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F97A990)
#define IHDKFBDLNGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F97A980)
#define IHDKFBDLNGL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F97AB30)
#define IHDKFBDLNGL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F97AAB0)
#define IHDKFBDLNGL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F97AC00)
#define IHDKFBDLNGL_GJAMEKJEODP_OFFSET UNITYSDK_OFFSET(0x1F97AA70)
#define IHDKFBDLNGL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F97A910)
#define IHDKFBDLNGL_KGPKBFOAKAP_OFFSET UNITYSDK_OFFSET(0x1F97AAA0)
#define IHDKFBDLNGL_KLFBMJEDIBJ_OFFSET UNITYSDK_OFFSET(0x1F97AA50)
#define IHDKFBDLNGL_LLAAJEHODMG_OFFSET UNITYSDK_OFFSET(0x1F97AA90)
#define IHDKFBDLNGL_MCGPJHCNMFD_OFFSET UNITYSDK_OFFSET(0x1F97AA60)
#define IHDKFBDLNGL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F97AFA0)
#define IHDKFBDLNGL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F97AF50)
#define IHDKFBDLNGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F97A970)
#define IHDKFBDLNGL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F97AC30)
#define IHDKFBDLNGL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F97AC90)

inline static constexpr unsigned int IHDKFBDLNGL_TypeDefinitionIndex = 26103;

	class IHDKFBDLNGL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PDFOMCJLLHH; // 0x18
		::System::UInt32 PDMNFJCGNGI; // 0x1C
		::System::UInt32 FOBEDKHFIMO; // 0x20
		static ::Google::Protobuf::MessageParser_1<::IHDKFBDLNGL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IHDKFBDLNGL*>**)UnitySDK::FromName("", "IHDKFBDLNGL")->GetStaticField(0x4BBB0);
		}

		// static const ::System::Object CPPIDHNGANG; // 0x0
		// static const ::System::Object NDMMEPBIBOM; // 0x0
		// static const ::System::Object MCHAMGPCCBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDKFBDLNGL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IHDKFBDLNGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHDKFBDLNGL*))((::PBYTE)hIl2Cpp + IHDKFBDLNGL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHDKFBDLNGL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IHDKFBDLNGL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IHDKFBDLNGL*>*(*)())((::PBYTE)hIl2Cpp + IHDKFBDLNGL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDKFBDLNGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IHDKFBDLNGL* Clone()
		{
			return ((::IHDKFBDLNGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDKFBDLNGL_CLONE_OFFSET))(this);
		}

		::System::UInt32 KLFBMJEDIBJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDKFBDLNGL_KLFBMJEDIBJ_OFFSET))(this);
		}

		::System::Void MCGPJHCNMFD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IHDKFBDLNGL_MCGPJHCNMFD_OFFSET))(this, a1);
		}

		::System::UInt32 GJAMEKJEODP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDKFBDLNGL_GJAMEKJEODP_OFFSET))(this);
		}

		::System::Void AHKGGIPOLEO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IHDKFBDLNGL_AHKGGIPOLEO_OFFSET))(this, a1);
		}

		::System::UInt32 LLAAJEHODMG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDKFBDLNGL_LLAAJEHODMG_OFFSET))(this);
		}

		::System::Void KGPKBFOAKAP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IHDKFBDLNGL_KGPKBFOAKAP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IHDKFBDLNGL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IHDKFBDLNGL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IHDKFBDLNGL*))((::PBYTE)hIl2Cpp + IHDKFBDLNGL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDKFBDLNGL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDKFBDLNGL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IHDKFBDLNGL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDKFBDLNGL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IHDKFBDLNGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHDKFBDLNGL*))((::PBYTE)hIl2Cpp + IHDKFBDLNGL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IHDKFBDLNGL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
