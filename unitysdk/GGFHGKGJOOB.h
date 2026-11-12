#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMNAMDLMADK;
class GGFHGKGJOOB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GGFHGKGJOOB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F767B50)
#define GGFHGKGJOOB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F767FD0)
#define GGFHGKGJOOB_CLONE_OFFSET UNITYSDK_OFFSET(0x1F7676E0)
#define GGFHGKGJOOB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F7675E0)
#define GGFHGKGJOOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1F767570)
#define GGFHGKGJOOB_DKBIGMHACCD_OFFSET UNITYSDK_OFFSET(0x1F767730)
#define GGFHGKGJOOB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F7677D0)
#define GGFHGKGJOOB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F767770)
#define GGFHGKGJOOB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F767920)
#define GGFHGKGJOOB_GFCPHBMGDCA_OFFSET UNITYSDK_OFFSET(0x1F767740)
#define GGFHGKGJOOB_HDDLEPLGCLJ_OFFSET UNITYSDK_OFFSET(0x1F767750)
#define GGFHGKGJOOB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F767500)
#define GGFHGKGJOOB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F767D90)
#define GGFHGKGJOOB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F767CD0)
#define GGFHGKGJOOB_MOLJCJOHBEL_OFFSET UNITYSDK_OFFSET(0x1F767760)
#define GGFHGKGJOOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F767560)
#define GGFHGKGJOOB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F7679B0)
#define GGFHGKGJOOB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F767A10)

inline static constexpr unsigned int GGFHGKGJOOB_TypeDefinitionIndex = 29760;

	class GGFHGKGJOOB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* CMOOJMNDMEN; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::AMNAMDLMADK*>* FDFBNBLNHLK; // 0x20
		::System::UInt32 FEMBEJOKJNP; // 0x28
		static ::System::Object** StaticGet_HKPCPPGEKPP()
		{
			return (::System::Object**)UnitySDK::FromName("", "GGFHGKGJOOB")->GetStaticField(0xDFB0);
		}

		static ::Google::Protobuf::FieldCodec_1<::AMNAMDLMADK*>** StaticGet_FEAFGBNBMEP()
		{
			return (::Google::Protobuf::FieldCodec_1<::AMNAMDLMADK*>**)UnitySDK::FromName("", "GGFHGKGJOOB")->GetStaticField(0xDFB8);
		}

		static ::Google::Protobuf::MessageParser_1<::GGFHGKGJOOB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GGFHGKGJOOB*>**)UnitySDK::FromName("", "GGFHGKGJOOB")->GetStaticField(0xDFC0);
		}

		// static const ::System::Object PDPEBMONKDC; // 0x0
		// static const ::System::Object CGEKBOACKCH; // 0x0
		// static const ::System::Object DOADNLHHMCH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGFHGKGJOOB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GGFHGKGJOOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGFHGKGJOOB*))((::PBYTE)hIl2Cpp + GGFHGKGJOOB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGFHGKGJOOB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GGFHGKGJOOB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GGFHGKGJOOB*>*(*)())((::PBYTE)hIl2Cpp + GGFHGKGJOOB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGFHGKGJOOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GGFHGKGJOOB* Clone()
		{
			return ((::GGFHGKGJOOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGFHGKGJOOB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* DKBIGMHACCD()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGFHGKGJOOB_DKBIGMHACCD_OFFSET))(this);
		}

		::System::UInt32 GFCPHBMGDCA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGFHGKGJOOB_GFCPHBMGDCA_OFFSET))(this);
		}

		::System::Void HDDLEPLGCLJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GGFHGKGJOOB_HDDLEPLGCLJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AMNAMDLMADK*>* MOLJCJOHBEL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AMNAMDLMADK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGFHGKGJOOB_MOLJCJOHBEL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GGFHGKGJOOB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GGFHGKGJOOB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GGFHGKGJOOB*))((::PBYTE)hIl2Cpp + GGFHGKGJOOB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGFHGKGJOOB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGFHGKGJOOB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GGFHGKGJOOB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGFHGKGJOOB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GGFHGKGJOOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGFHGKGJOOB*))((::PBYTE)hIl2Cpp + GGFHGKGJOOB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GGFHGKGJOOB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
