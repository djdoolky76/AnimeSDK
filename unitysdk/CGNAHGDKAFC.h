#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGNAHGDKAFC;
class MLGNKOCLDCO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CGNAHGDKAFC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD2D980)
#define CGNAHGDKAFC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD2DD40)
#define CGNAHGDKAFC_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD2D3A0)
#define CGNAHGDKAFC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD2D2E0)
#define CGNAHGDKAFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD2D290)
#define CGNAHGDKAFC_DKGIDIJJKKH_OFFSET UNITYSDK_OFFSET(0x1FD2D410)
#define CGNAHGDKAFC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD2D5E0)
#define CGNAHGDKAFC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD2D440)
#define CGNAHGDKAFC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD2D720)
#define CGNAHGDKAFC_JFJGNLBKIJF_OFFSET UNITYSDK_OFFSET(0x1FD2D420)
#define CGNAHGDKAFC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD2D220)
#define CGNAHGDKAFC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD2DB50)
#define CGNAHGDKAFC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD2DAA0)
#define CGNAHGDKAFC_NHODFKHEPCO_OFFSET UNITYSDK_OFFSET(0x1FD2D3F0)
#define CGNAHGDKAFC_NKEKGHGHPBE_OFFSET UNITYSDK_OFFSET(0x1FD2D400)
#define CGNAHGDKAFC_ONDKPPDALMP_OFFSET UNITYSDK_OFFSET(0x1FD2D430)
#define CGNAHGDKAFC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD2D280)
#define CGNAHGDKAFC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD2D790)
#define CGNAHGDKAFC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD2D7F0)

inline static constexpr unsigned int CGNAHGDKAFC_TypeDefinitionIndex = 29768;

	class CGNAHGDKAFC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::MLGNKOCLDCO*>* ANMEKHCCDAA; // 0x18
		::System::Boolean FAMINGFDGLK; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 BKMMMLDLBJI; // 0x24
		static ::Google::Protobuf::FieldCodec_1<::MLGNKOCLDCO*>** StaticGet_CNDLIJHLHFD()
		{
			return (::Google::Protobuf::FieldCodec_1<::MLGNKOCLDCO*>**)UnitySDK::FromName("", "CGNAHGDKAFC")->GetStaticField(0xC950);
		}

		static ::Google::Protobuf::MessageParser_1<::CGNAHGDKAFC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CGNAHGDKAFC*>**)UnitySDK::FromName("", "CGNAHGDKAFC")->GetStaticField(0xC958);
		}

		// static const ::System::Object HCNFCMDMDGL; // 0x0
		// static const ::System::Object DHOPBDGOOLL; // 0x0
		// static const ::System::Object FFIPNBCJCGO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNAHGDKAFC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CGNAHGDKAFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGNAHGDKAFC*))((::PBYTE)hIl2Cpp + CGNAHGDKAFC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGNAHGDKAFC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CGNAHGDKAFC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CGNAHGDKAFC*>*(*)())((::PBYTE)hIl2Cpp + CGNAHGDKAFC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNAHGDKAFC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CGNAHGDKAFC* Clone()
		{
			return ((::CGNAHGDKAFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNAHGDKAFC_CLONE_OFFSET))(this);
		}

		::System::Boolean NHODFKHEPCO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNAHGDKAFC_NHODFKHEPCO_OFFSET))(this);
		}

		::System::Void NKEKGHGHPBE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CGNAHGDKAFC_NKEKGHGHPBE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::MLGNKOCLDCO*>* DKGIDIJJKKH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::MLGNKOCLDCO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNAHGDKAFC_DKGIDIJJKKH_OFFSET))(this);
		}

		::System::UInt32 JFJGNLBKIJF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNAHGDKAFC_JFJGNLBKIJF_OFFSET))(this);
		}

		::System::Void ONDKPPDALMP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGNAHGDKAFC_ONDKPPDALMP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CGNAHGDKAFC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CGNAHGDKAFC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CGNAHGDKAFC*))((::PBYTE)hIl2Cpp + CGNAHGDKAFC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNAHGDKAFC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNAHGDKAFC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CGNAHGDKAFC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNAHGDKAFC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CGNAHGDKAFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGNAHGDKAFC*))((::PBYTE)hIl2Cpp + CGNAHGDKAFC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CGNAHGDKAFC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
