#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCCONKJHDJL;
class NBGDEFLFLMI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NBGDEFLFLMI_ABJBCBDIBAA_OFFSET UNITYSDK_OFFSET(0x20159300)
#define NBGDEFLFLMI_AOGOLBNELOH_OFFSET UNITYSDK_OFFSET(0x201592D0)
#define NBGDEFLFLMI_APPPOHDNCFL_OFFSET UNITYSDK_OFFSET(0x20159320)
#define NBGDEFLFLMI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20159910)
#define NBGDEFLFLMI_CCTOR_OFFSET UNITYSDK_OFFSET(0x20159D50)
#define NBGDEFLFLMI_CLONE_OFFSET UNITYSDK_OFFSET(0x20159280)
#define NBGDEFLFLMI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20159130)
#define NBGDEFLFLMI_CTOR_OFFSET UNITYSDK_OFFSET(0x201590A0)
#define NBGDEFLFLMI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20159390)
#define NBGDEFLFLMI_EQUALS_OFFSET UNITYSDK_OFFSET(0x20159330)
#define NBGDEFLFLMI_FGIBGBMIOBE_OFFSET UNITYSDK_OFFSET(0x201592E0)
#define NBGDEFLFLMI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20159590)
#define NBGDEFLFLMI_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0x20159310)
#define NBGDEFLFLMI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20159030)
#define NBGDEFLFLMI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20159BD0)
#define NBGDEFLFLMI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20159AC0)
#define NBGDEFLFLMI_PACHEDCJIPL_OFFSET UNITYSDK_OFFSET(0x201592F0)
#define NBGDEFLFLMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20159090)
#define NBGDEFLFLMI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20159710)
#define NBGDEFLFLMI_WRITETO_OFFSET UNITYSDK_OFFSET(0x20159770)

inline static constexpr unsigned int NBGDEFLFLMI_TypeDefinitionIndex = 29863;

	class NBGDEFLFLMI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GPAACBEDJAL; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::BCCONKJHDJL*>* JKIPGBOFPJJ; // 0x20
		::BCCONKJHDJL* JDGKMEDADCA; // 0x28
		::System::UInt32 PPNELLDGNPC; // 0x30
		static ::Google::Protobuf::MessageParser_1<::NBGDEFLFLMI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NBGDEFLFLMI*>**)UnitySDK::FromName("", "NBGDEFLFLMI")->GetStaticField(0x44C30);
		}

		static ::Google::Protobuf::FieldCodec_1<::BCCONKJHDJL*>** StaticGet_KCALDLMJDMN()
		{
			return (::Google::Protobuf::FieldCodec_1<::BCCONKJHDJL*>**)UnitySDK::FromName("", "NBGDEFLFLMI")->GetStaticField(0x44C38);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CEBEHEIEICH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NBGDEFLFLMI")->GetStaticField(0x44C40);
		}

		// static const ::System::Object PPFBJIHKKML; // 0x0
		// static const ::System::Object GEJNIOMECJG; // 0x0
		// static const ::System::Object OPHEPKPJAFK; // 0x0
		// static const ::System::Object GLIJLPOGDAK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGDEFLFLMI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NBGDEFLFLMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBGDEFLFLMI*))((::PBYTE)hIl2Cpp + NBGDEFLFLMI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBGDEFLFLMI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NBGDEFLFLMI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NBGDEFLFLMI*>*(*)())((::PBYTE)hIl2Cpp + NBGDEFLFLMI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGDEFLFLMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NBGDEFLFLMI* Clone()
		{
			return ((::NBGDEFLFLMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGDEFLFLMI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BCCONKJHDJL*>* AOGOLBNELOH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BCCONKJHDJL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGDEFLFLMI_AOGOLBNELOH_OFFSET))(this);
		}

		::BCCONKJHDJL* FGIBGBMIOBE()
		{
			return ((::BCCONKJHDJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGDEFLFLMI_FGIBGBMIOBE_OFFSET))(this);
		}

		::System::Void PACHEDCJIPL(::BCCONKJHDJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCCONKJHDJL*))((::PBYTE)hIl2Cpp + NBGDEFLFLMI_PACHEDCJIPL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ABJBCBDIBAA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGDEFLFLMI_ABJBCBDIBAA_OFFSET))(this);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGDEFLFLMI_IIILLEPDBCJ_OFFSET))(this);
		}

		::System::Void APPPOHDNCFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBGDEFLFLMI_APPPOHDNCFL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NBGDEFLFLMI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NBGDEFLFLMI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBGDEFLFLMI*))((::PBYTE)hIl2Cpp + NBGDEFLFLMI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGDEFLFLMI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGDEFLFLMI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NBGDEFLFLMI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGDEFLFLMI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NBGDEFLFLMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBGDEFLFLMI*))((::PBYTE)hIl2Cpp + NBGDEFLFLMI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NBGDEFLFLMI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
