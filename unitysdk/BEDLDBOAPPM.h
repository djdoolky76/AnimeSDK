#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEDLDBOAPPM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BEDLDBOAPPM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E922AB0)
#define BEDLDBOAPPM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E922ED0)
#define BEDLDBOAPPM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E922670)
#define BEDLDBOAPPM_COGNLAIFAHA_OFFSET UNITYSDK_OFFSET(0x1E922710)
#define BEDLDBOAPPM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E922630)
#define BEDLDBOAPPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E922620)
#define BEDLDBOAPPM_ENEIEIPBBPN_OFFSET UNITYSDK_OFFSET(0x1E922700)
#define BEDLDBOAPPM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9227D0)
#define BEDLDBOAPPM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E922750)
#define BEDLDBOAPPM_FFFDGCMLLAI_OFFSET UNITYSDK_OFFSET(0x1E9226F0)
#define BEDLDBOAPPM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9228B0)
#define BEDLDBOAPPM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9225B0)
#define BEDLDBOAPPM_LKIBNGNDOFF_OFFSET UNITYSDK_OFFSET(0x1E922720)
#define BEDLDBOAPPM_MAKHLOBJHLM_OFFSET UNITYSDK_OFFSET(0x1E922730)
#define BEDLDBOAPPM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E922D30)
#define BEDLDBOAPPM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E922CE0)
#define BEDLDBOAPPM_NPNOFEKIEMJ_OFFSET UNITYSDK_OFFSET(0x1E922740)
#define BEDLDBOAPPM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E922610)
#define BEDLDBOAPPM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E922910)
#define BEDLDBOAPPM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E922970)

	class BEDLDBOAPPM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BGHAMFEEKBI; // 0x18
		::System::Byte _padding0[0x4];
		::System::Int64 GFNEFHEHFOC; // 0x20
		::System::Int64 MFHNPAODGGN; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BEDLDBOAPPM")->GetStaticField(0x2CFE0);
		}

		// static const ::System::Object FIEMKPOELCD; // 0x0
		// static const ::System::Object DCMCFDFHLLD; // 0x0
		// static const ::System::Object INPMBLCHNGN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDLDBOAPPM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BEDLDBOAPPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEDLDBOAPPM*))((::PBYTE)hIl2Cpp + BEDLDBOAPPM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEDLDBOAPPM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BEDLDBOAPPM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDLDBOAPPM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BEDLDBOAPPM* Clone()
		{
			return ((::BEDLDBOAPPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDLDBOAPPM_CLONE_OFFSET))(this);
		}

		::System::Int64 FFFDGCMLLAI()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDLDBOAPPM_FFFDGCMLLAI_OFFSET))(this);
		}

		::System::Void ENEIEIPBBPN(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + BEDLDBOAPPM_ENEIEIPBBPN_OFFSET))(this, a1);
		}

		::System::UInt32 COGNLAIFAHA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDLDBOAPPM_COGNLAIFAHA_OFFSET))(this);
		}

		::System::Void LKIBNGNDOFF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BEDLDBOAPPM_LKIBNGNDOFF_OFFSET))(this, a1);
		}

		::System::Int64 MAKHLOBJHLM()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDLDBOAPPM_MAKHLOBJHLM_OFFSET))(this);
		}

		::System::Void NPNOFEKIEMJ(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + BEDLDBOAPPM_NPNOFEKIEMJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BEDLDBOAPPM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BEDLDBOAPPM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BEDLDBOAPPM*))((::PBYTE)hIl2Cpp + BEDLDBOAPPM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDLDBOAPPM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDLDBOAPPM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BEDLDBOAPPM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDLDBOAPPM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BEDLDBOAPPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEDLDBOAPPM*))((::PBYTE)hIl2Cpp + BEDLDBOAPPM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BEDLDBOAPPM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
