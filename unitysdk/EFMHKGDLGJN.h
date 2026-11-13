#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFMHKGDLGJN;
class JEFCEGFBOAF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EFMHKGDLGJN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20497AC0)
#define EFMHKGDLGJN_CCTOR_OFFSET UNITYSDK_OFFSET(0x20497DD0)
#define EFMHKGDLGJN_CLONE_OFFSET UNITYSDK_OFFSET(0x20497450)
#define EFMHKGDLGJN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x204973A0)
#define EFMHKGDLGJN_CTOR_OFFSET UNITYSDK_OFFSET(0x20497350)
#define EFMHKGDLGJN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20497650)
#define EFMHKGDLGJN_EQUALS_OFFSET UNITYSDK_OFFSET(0x204974B0)
#define EFMHKGDLGJN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x204977F0)
#define EFMHKGDLGJN_HKHAFJMJDBD_OFFSET UNITYSDK_OFFSET(0x20497490)
#define EFMHKGDLGJN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20497310)
#define EFMHKGDLGJN_KCLJKHCIPAM_OFFSET UNITYSDK_OFFSET(0x204974A0)
#define EFMHKGDLGJN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20497C00)
#define EFMHKGDLGJN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20497B80)
#define EFMHKGDLGJN_ONEJHIAAJLI_OFFSET UNITYSDK_OFFSET(0x20497480)
#define EFMHKGDLGJN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20497340)
#define EFMHKGDLGJN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20497980)
#define EFMHKGDLGJN_WRITETO_OFFSET UNITYSDK_OFFSET(0x204979E0)

inline static constexpr unsigned int EFMHKGDLGJN_TypeDefinitionIndex = 27003;

	class EFMHKGDLGJN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FMGALEILPFI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::JEFCEGFBOAF* FOIHNMFBHDG; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_IBGNFOCBBJD()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "EFMHKGDLGJN")->GetStaticField(0x4B790);
		}

		static ::Google::Protobuf::MessageParser_1<::EFMHKGDLGJN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EFMHKGDLGJN*>**)UnitySDK::FromName("", "EFMHKGDLGJN")->GetStaticField(0x4B798);
		}

		// static const ::System::Object LNGMAHHIINN; // 0x0
		// static const ::System::Object PLGOOCNJNDO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFMHKGDLGJN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EFMHKGDLGJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFMHKGDLGJN*))((::PBYTE)hIl2Cpp + EFMHKGDLGJN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFMHKGDLGJN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EFMHKGDLGJN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EFMHKGDLGJN*>*(*)())((::PBYTE)hIl2Cpp + EFMHKGDLGJN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFMHKGDLGJN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EFMHKGDLGJN* Clone()
		{
			return ((::EFMHKGDLGJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFMHKGDLGJN_CLONE_OFFSET))(this);
		}

		::JEFCEGFBOAF* ONEJHIAAJLI()
		{
			return ((::JEFCEGFBOAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFMHKGDLGJN_ONEJHIAAJLI_OFFSET))(this);
		}

		::System::Void HKHAFJMJDBD(::JEFCEGFBOAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEFCEGFBOAF*))((::PBYTE)hIl2Cpp + EFMHKGDLGJN_HKHAFJMJDBD_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KCLJKHCIPAM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFMHKGDLGJN_KCLJKHCIPAM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFMHKGDLGJN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EFMHKGDLGJN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EFMHKGDLGJN*))((::PBYTE)hIl2Cpp + EFMHKGDLGJN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFMHKGDLGJN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFMHKGDLGJN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EFMHKGDLGJN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFMHKGDLGJN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EFMHKGDLGJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFMHKGDLGJN*))((::PBYTE)hIl2Cpp + EFMHKGDLGJN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EFMHKGDLGJN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
