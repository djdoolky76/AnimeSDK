#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABLCCPHIOMI.h"
#include "unitysdk/System/Object.h"
class IPGIJFNAFLC;
class JFJDMGOMJOF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JFJDMGOMJOF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E72C3B0)
#define JFJDMGOMJOF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E72C720)
#define JFJDMGOMJOF_CKBPGEAPEHI_OFFSET UNITYSDK_OFFSET(0x1E72BEC0)
#define JFJDMGOMJOF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E72BDD0)
#define JFJDMGOMJOF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E72BD40)
#define JFJDMGOMJOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E72BD30)
#define JFJDMGOMJOF_EHCOGHILKHE_OFFSET UNITYSDK_OFFSET(0x1E72BEA0)
#define JFJDMGOMJOF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E72C090)
#define JFJDMGOMJOF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E72BEE0)
#define JFJDMGOMJOF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E72C210)
#define JFJDMGOMJOF_IJMLPBNEPMA_OFFSET UNITYSDK_OFFSET(0x1E72BED0)
#define JFJDMGOMJOF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E72BCC0)
#define JFJDMGOMJOF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E72C560)
#define JFJDMGOMJOF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E72C4C0)
#define JFJDMGOMJOF_NHEIGMMDJKM_OFFSET UNITYSDK_OFFSET(0x1E72BEB0)
#define JFJDMGOMJOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E72BD20)
#define JFJDMGOMJOF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E72C260)
#define JFJDMGOMJOF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E72C2C0)

	class JFJDMGOMJOF : public ::System::Object
	{
	public:
		::IPGIJFNAFLC* HHLKPEJKANL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::ABLCCPHIOMI ECGJOENBJJH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JFJDMGOMJOF")->GetStaticField(0x24EB0);
		}

		// static const ::System::Object AMNGEJOKOPB; // 0x0
		// static const ::System::Object BMKMOEPJODN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJDMGOMJOF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JFJDMGOMJOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFJDMGOMJOF*))((::PBYTE)hIl2Cpp + JFJDMGOMJOF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFJDMGOMJOF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JFJDMGOMJOF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJDMGOMJOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JFJDMGOMJOF* Clone()
		{
			return ((::JFJDMGOMJOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJDMGOMJOF_CLONE_OFFSET))(this);
		}

		::IPGIJFNAFLC* EHCOGHILKHE()
		{
			return ((::IPGIJFNAFLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJDMGOMJOF_EHCOGHILKHE_OFFSET))(this);
		}

		::System::Void NHEIGMMDJKM(::IPGIJFNAFLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPGIJFNAFLC*))((::PBYTE)hIl2Cpp + JFJDMGOMJOF_NHEIGMMDJKM_OFFSET))(this, a1);
		}

		::ABLCCPHIOMI CKBPGEAPEHI()
		{
			return ((::ABLCCPHIOMI(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJDMGOMJOF_CKBPGEAPEHI_OFFSET))(this);
		}

		::System::Void IJMLPBNEPMA(::ABLCCPHIOMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABLCCPHIOMI))((::PBYTE)hIl2Cpp + JFJDMGOMJOF_IJMLPBNEPMA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JFJDMGOMJOF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JFJDMGOMJOF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JFJDMGOMJOF*))((::PBYTE)hIl2Cpp + JFJDMGOMJOF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJDMGOMJOF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJDMGOMJOF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JFJDMGOMJOF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJDMGOMJOF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JFJDMGOMJOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFJDMGOMJOF*))((::PBYTE)hIl2Cpp + JFJDMGOMJOF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JFJDMGOMJOF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
