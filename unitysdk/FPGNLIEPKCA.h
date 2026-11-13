#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPGNLIEPKCA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FPGNLIEPKCA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB93E70)
#define FPGNLIEPKCA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB941F0)
#define FPGNLIEPKCA_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB93970)
#define FPGNLIEPKCA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB938B0)
#define FPGNLIEPKCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB93860)
#define FPGNLIEPKCA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB93B80)
#define FPGNLIEPKCA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB939F0)
#define FPGNLIEPKCA_FDOLAGFBFNC_OFFSET UNITYSDK_OFFSET(0x1FB939C0)
#define FPGNLIEPKCA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB93CA0)
#define FPGNLIEPKCA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB937F0)
#define FPGNLIEPKCA_LOFPHMJLFJD_OFFSET UNITYSDK_OFFSET(0x1FB939D0)
#define FPGNLIEPKCA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB94020)
#define FPGNLIEPKCA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB93FA0)
#define FPGNLIEPKCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB93850)
#define FPGNLIEPKCA_PGAEKMPHIOK_OFFSET UNITYSDK_OFFSET(0x1FB939E0)
#define FPGNLIEPKCA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB93D10)
#define FPGNLIEPKCA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB93D70)

inline static constexpr unsigned int FPGNLIEPKCA_TypeDefinitionIndex = 30437;

	class FPGNLIEPKCA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* ABHLIFEAGIG; // 0x18
		::System::UInt32 MHMDNAJBBIK; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FPGNLIEPKCA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FPGNLIEPKCA*>**)UnitySDK::FromName("", "FPGNLIEPKCA")->GetStaticField(0x53170);
		}

		static ::System::Object** StaticGet_NHNLMKGMPNB()
		{
			return (::System::Object**)UnitySDK::FromName("", "FPGNLIEPKCA")->GetStaticField(0x53178);
		}

		// static const ::System::Object JCGCCDCNBDN; // 0x0
		// static const ::System::Object HKCOCPCBMEA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGNLIEPKCA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FPGNLIEPKCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPGNLIEPKCA*))((::PBYTE)hIl2Cpp + FPGNLIEPKCA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPGNLIEPKCA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FPGNLIEPKCA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FPGNLIEPKCA*>*(*)())((::PBYTE)hIl2Cpp + FPGNLIEPKCA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGNLIEPKCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FPGNLIEPKCA* Clone()
		{
			return ((::FPGNLIEPKCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGNLIEPKCA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* FDOLAGFBFNC()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGNLIEPKCA_FDOLAGFBFNC_OFFSET))(this);
		}

		::System::UInt32 LOFPHMJLFJD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGNLIEPKCA_LOFPHMJLFJD_OFFSET))(this);
		}

		::System::Void PGAEKMPHIOK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FPGNLIEPKCA_PGAEKMPHIOK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FPGNLIEPKCA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FPGNLIEPKCA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPGNLIEPKCA*))((::PBYTE)hIl2Cpp + FPGNLIEPKCA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGNLIEPKCA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGNLIEPKCA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FPGNLIEPKCA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGNLIEPKCA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FPGNLIEPKCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPGNLIEPKCA*))((::PBYTE)hIl2Cpp + FPGNLIEPKCA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FPGNLIEPKCA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
