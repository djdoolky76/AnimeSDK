#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/INCFAFNOAPM.h"
#include "unitysdk/System/Object.h"
class ALBOJHJALOF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ALBOJHJALOF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3D3D10)
#define ALBOJHJALOF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3D40D0)
#define ALBOJHJALOF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3D3900)
#define ALBOJHJALOF_CPEEIHDCIFD_OFFSET UNITYSDK_OFFSET(0x1E3D3980)
#define ALBOJHJALOF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3D38C0)
#define ALBOJHJALOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D38B0)
#define ALBOJHJALOF_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E3D39C0)
#define ALBOJHJALOF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3D3A60)
#define ALBOJHJALOF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3D39E0)
#define ALBOJHJALOF_FHOLHJHEOMJ_OFFSET UNITYSDK_OFFSET(0x1E3D3990)
#define ALBOJHJALOF_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E3D39D0)
#define ALBOJHJALOF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3D3B30)
#define ALBOJHJALOF_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1E3D39B0)
#define ALBOJHJALOF_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1E3D39A0)
#define ALBOJHJALOF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3D3840)
#define ALBOJHJALOF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3D3F30)
#define ALBOJHJALOF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3D3EE0)
#define ALBOJHJALOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3D38A0)
#define ALBOJHJALOF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3D3B60)
#define ALBOJHJALOF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3D3BC0)

inline static constexpr unsigned int ALBOJHJALOF_TypeDefinitionIndex = 30919;

	class ALBOJHJALOF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GEMFJILOPLL; // 0x18
		::System::UInt32 NMABHKCOLCM; // 0x1C
		::INCFAFNOAPM GMPNCOBOFDM; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ALBOJHJALOF")->GetStaticField(0x37760);
		}

		// static const ::System::Object IADILMFABOH; // 0x0
		// static const ::System::Object GDFHGOOLLFD; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBOJHJALOF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ALBOJHJALOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALBOJHJALOF*))((::PBYTE)hIl2Cpp + ALBOJHJALOF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALBOJHJALOF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ALBOJHJALOF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBOJHJALOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ALBOJHJALOF* Clone()
		{
			return ((::ALBOJHJALOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBOJHJALOF_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPEEIHDCIFD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBOJHJALOF_CPEEIHDCIFD_OFFSET))(this);
		}

		::System::Void FHOLHJHEOMJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALBOJHJALOF_FHOLHJHEOMJ_OFFSET))(this, a1);
		}

		::INCFAFNOAPM JBIOGKPHKKC()
		{
			return ((::INCFAFNOAPM(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBOJHJALOF_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::INCFAFNOAPM a1)
		{
			return ((::System::Void(*)(::PVOID, ::INCFAFNOAPM))((::PBYTE)hIl2Cpp + ALBOJHJALOF_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBOJHJALOF_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALBOJHJALOF_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALBOJHJALOF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ALBOJHJALOF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALBOJHJALOF*))((::PBYTE)hIl2Cpp + ALBOJHJALOF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBOJHJALOF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBOJHJALOF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ALBOJHJALOF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBOJHJALOF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ALBOJHJALOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALBOJHJALOF*))((::PBYTE)hIl2Cpp + ALBOJHJALOF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ALBOJHJALOF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
