#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGOJLBNJKCN.h"
#include "unitysdk/System/Object.h"
class EPCNGNEEMBI;
class IKJDKNKJBGI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IKJDKNKJBGI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20068370)
#define IKJDKNKJBGI_CCTOR_OFFSET UNITYSDK_OFFSET(0x20068840)
#define IKJDKNKJBGI_CLONE_OFFSET UNITYSDK_OFFSET(0x20067DF0)
#define IKJDKNKJBGI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20067CB0)
#define IKJDKNKJBGI_CTOR_OFFSET UNITYSDK_OFFSET(0x20067C20)
#define IKJDKNKJBGI_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x20067E40)
#define IKJDKNKJBGI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20067ED0)
#define IKJDKNKJBGI_EQUALS_OFFSET UNITYSDK_OFFSET(0x20067EA0)
#define IKJDKNKJBGI_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x20067E50)
#define IKJDKNKJBGI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20067FA0)
#define IKJDKNKJBGI_HGCGGOGHCFJ_OFFSET UNITYSDK_OFFSET(0x20067E20)
#define IKJDKNKJBGI_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x20067E70)
#define IKJDKNKJBGI_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x20067E60)
#define IKJDKNKJBGI_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x20067E80)
#define IKJDKNKJBGI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20067BE0)
#define IKJDKNKJBGI_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x20067E90)
#define IKJDKNKJBGI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x200686D0)
#define IKJDKNKJBGI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x200685F0)
#define IKJDKNKJBGI_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x20067E30)
#define IKJDKNKJBGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20067C10)
#define IKJDKNKJBGI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x200680F0)
#define IKJDKNKJBGI_WRITETO_OFFSET UNITYSDK_OFFSET(0x20068150)

inline static constexpr unsigned int IKJDKNKJBGI_TypeDefinitionIndex = 29246;

	class IKJDKNKJBGI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ANPCJHALNMK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::EPCNGNEEMBI*>* CBFGBDBJHID; // 0x20
		::System::UInt32 KBBFPCGLDCN; // 0x28
		::System::UInt32 GEMFJILOPLL; // 0x2C
		::OGOJLBNJKCN GMPNCOBOFDM; // 0x30
		static ::Google::Protobuf::MessageParser_1<::IKJDKNKJBGI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IKJDKNKJBGI*>**)UnitySDK::FromName("", "IKJDKNKJBGI")->GetStaticField(0x4A670);
		}

		static ::Google::Protobuf::FieldCodec_1<::EPCNGNEEMBI*>** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::EPCNGNEEMBI*>**)UnitySDK::FromName("", "IKJDKNKJBGI")->GetStaticField(0x4A678);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_INFAHLBOJMO()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "IKJDKNKJBGI")->GetStaticField(0x4A680);
		}

		// static const ::System::Object CGNHFFIFCBO; // 0x0
		// static const ::System::Object IMGDAOEBONP; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object GDFHGOOLLFD; // 0x0
		// static const ::System::Object CLGAAGPCNGI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJDKNKJBGI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IKJDKNKJBGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKJDKNKJBGI*))((::PBYTE)hIl2Cpp + IKJDKNKJBGI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKJDKNKJBGI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IKJDKNKJBGI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IKJDKNKJBGI*>*(*)())((::PBYTE)hIl2Cpp + IKJDKNKJBGI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJDKNKJBGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IKJDKNKJBGI* Clone()
		{
			return ((::IKJDKNKJBGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJDKNKJBGI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HGCGGOGHCFJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJDKNKJBGI_HGCGGOGHCFJ_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EPCNGNEEMBI*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EPCNGNEEMBI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJDKNKJBGI_MJOEMBBMBON_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJDKNKJBGI_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKJDKNKJBGI_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::OGOJLBNJKCN JBIOGKPHKKC()
		{
			return ((::OGOJLBNJKCN(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJDKNKJBGI_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::OGOJLBNJKCN a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGOJLBNJKCN))((::PBYTE)hIl2Cpp + IKJDKNKJBGI_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::UInt32 JGKKIODILCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJDKNKJBGI_JGKKIODILCO_OFFSET))(this);
		}

		::System::Void KAADEPADNMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKJDKNKJBGI_KAADEPADNMH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKJDKNKJBGI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IKJDKNKJBGI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IKJDKNKJBGI*))((::PBYTE)hIl2Cpp + IKJDKNKJBGI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJDKNKJBGI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJDKNKJBGI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IKJDKNKJBGI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJDKNKJBGI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IKJDKNKJBGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKJDKNKJBGI*))((::PBYTE)hIl2Cpp + IKJDKNKJBGI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IKJDKNKJBGI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
