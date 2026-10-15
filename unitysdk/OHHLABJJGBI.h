#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHHLABJJGBI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OHHLABJJGBI_BKPMKACPAKB_OFFSET UNITYSDK_OFFSET(0x1DE608E0)
#define OHHLABJJGBI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE60E00)
#define OHHLABJJGBI_CBOFFPEFEPP_OFFSET UNITYSDK_OFFSET(0x1DE60900)
#define OHHLABJJGBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE61170)
#define OHHLABJJGBI_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE60860)
#define OHHLABJJGBI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE607C0)
#define OHHLABJJGBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE60770)
#define OHHLABJJGBI_DLBMEBEGNGL_OFFSET UNITYSDK_OFFSET(0x1DE60910)
#define OHHLABJJGBI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE609D0)
#define OHHLABJJGBI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE60920)
#define OHHLABJJGBI_GEBJENNPMMH_OFFSET UNITYSDK_OFFSET(0x1DE608F0)
#define OHHLABJJGBI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE60AE0)
#define OHHLABJJGBI_JHHECJIODKO_OFFSET UNITYSDK_OFFSET(0x1DE608D0)
#define OHHLABJJGBI_JHJCOEDMNIN_OFFSET UNITYSDK_OFFSET(0x1DE608B0)
#define OHHLABJJGBI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE60700)
#define OHHLABJJGBI_KAOEFHEOLAO_OFFSET UNITYSDK_OFFSET(0x1DE608C0)
#define OHHLABJJGBI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE61060)
#define OHHLABJJGBI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE61000)
#define OHHLABJJGBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE60760)
#define OHHLABJJGBI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE60BE0)
#define OHHLABJJGBI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE60C40)

inline static constexpr unsigned int OHHLABJJGBI_TypeDefinitionIndex = 25736;

	class OHHLABJJGBI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NDPKJECFDFL; // 0x18
		::System::UInt32 DJJNAPLICOJ; // 0x20
		::System::UInt32 CLBJDBPOOEK; // 0x24
		::System::UInt32 NBFPOGFBMFE; // 0x28
		static ::Google::Protobuf::MessageParser_1<::OHHLABJJGBI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OHHLABJJGBI*>**)UnitySDK::FromName("", "OHHLABJJGBI")->GetStaticField(0x1AA20);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_IGDAMNFIMKF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "OHHLABJJGBI")->GetStaticField(0x1AA28);
		}

		// static const ::System::Object KKMGCAJIOLL; // 0x0
		// static const ::System::Object CJIHHBEOLPP; // 0x0
		// static const ::System::Object FDIPGFLLGFC; // 0x0
		// static const ::System::Object GKBPDIPOFGE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHLABJJGBI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OHHLABJJGBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHHLABJJGBI*))((::PBYTE)hIl2Cpp + OHHLABJJGBI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHHLABJJGBI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OHHLABJJGBI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OHHLABJJGBI*>*(*)())((::PBYTE)hIl2Cpp + OHHLABJJGBI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHLABJJGBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OHHLABJJGBI* Clone()
		{
			return ((::OHHLABJJGBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHLABJJGBI_CLONE_OFFSET))(this);
		}

		::System::UInt32 JHJCOEDMNIN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHLABJJGBI_JHJCOEDMNIN_OFFSET))(this);
		}

		::System::Void KAOEFHEOLAO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OHHLABJJGBI_KAOEFHEOLAO_OFFSET))(this, a1);
		}

		::System::UInt32 JHHECJIODKO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHLABJJGBI_JHHECJIODKO_OFFSET))(this);
		}

		::System::Void BKPMKACPAKB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OHHLABJJGBI_BKPMKACPAKB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GEBJENNPMMH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHLABJJGBI_GEBJENNPMMH_OFFSET))(this);
		}

		::System::UInt32 CBOFFPEFEPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHLABJJGBI_CBOFFPEFEPP_OFFSET))(this);
		}

		::System::Void DLBMEBEGNGL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OHHLABJJGBI_DLBMEBEGNGL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OHHLABJJGBI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OHHLABJJGBI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OHHLABJJGBI*))((::PBYTE)hIl2Cpp + OHHLABJJGBI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHLABJJGBI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHLABJJGBI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OHHLABJJGBI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHLABJJGBI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OHHLABJJGBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHHLABJJGBI*))((::PBYTE)hIl2Cpp + OHHLABJJGBI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OHHLABJJGBI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
