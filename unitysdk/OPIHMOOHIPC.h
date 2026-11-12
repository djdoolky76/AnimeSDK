#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DILHPBMCOFK.h"
#include "unitysdk/System/Object.h"
class OPIHMOOHIPC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OPIHMOOHIPC_BCECGGBFEHK_OFFSET UNITYSDK_OFFSET(0x1F1AB9A0)
#define OPIHMOOHIPC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F1ABE00)
#define OPIHMOOHIPC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1AC150)
#define OPIHMOOHIPC_CIBEMIPAPLH_OFFSET UNITYSDK_OFFSET(0x1F1AB9C0)
#define OPIHMOOHIPC_CLONE_OFFSET UNITYSDK_OFFSET(0x1F1AB8A0)
#define OPIHMOOHIPC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F1AB850)
#define OPIHMOOHIPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1AB840)
#define OPIHMOOHIPC_DBFHLAPFFPP_OFFSET UNITYSDK_OFFSET(0x1F1AB9B0)
#define OPIHMOOHIPC_DLBJCOEDMIN_OFFSET UNITYSDK_OFFSET(0x1F1AB940)
#define OPIHMOOHIPC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F1ABA80)
#define OPIHMOOHIPC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F1AB9D0)
#define OPIHMOOHIPC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F1ABAE0)
#define OPIHMOOHIPC_GJADKBNFLPP_OFFSET UNITYSDK_OFFSET(0x1F1AB950)
#define OPIHMOOHIPC_GKMJBFOINMH_OFFSET UNITYSDK_OFFSET(0x1F1AB960)
#define OPIHMOOHIPC_GNBIPGJGOAJ_OFFSET UNITYSDK_OFFSET(0x1F1AB980)
#define OPIHMOOHIPC_ICMCGHDHBMJ_OFFSET UNITYSDK_OFFSET(0x1F1AB990)
#define OPIHMOOHIPC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F1AB7D0)
#define OPIHMOOHIPC_LAIBDDKPHCA_OFFSET UNITYSDK_OFFSET(0x1F1AB930)
#define OPIHMOOHIPC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F1AC090)
#define OPIHMOOHIPC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F1AC030)
#define OPIHMOOHIPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F1AB830)
#define OPIHMOOHIPC_PJLEOJKPGAJ_OFFSET UNITYSDK_OFFSET(0x1F1AB970)
#define OPIHMOOHIPC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F1ABB30)
#define OPIHMOOHIPC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F1ABB90)

inline static constexpr unsigned int OPIHMOOHIPC_TypeDefinitionIndex = 29231;

	class OPIHMOOHIPC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::DILHPBMCOFK AGIEMFKEBEC; // 0x18
		::System::Byte _padding0[0x4];
		::System::UInt64 OGLCKCMGDNJ; // 0x20
		::System::UInt32 BCLKCLDFMOA; // 0x28
		::System::Boolean FCDHKKAHONG; // 0x2C
		::System::Boolean ICMBCPLLDLA; // 0x2D
		static ::Google::Protobuf::MessageParser_1<::OPIHMOOHIPC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OPIHMOOHIPC*>**)UnitySDK::FromName("", "OPIHMOOHIPC")->GetStaticField(0x29020);
		}

		// static const ::System::Object CHOFGGDOMBK; // 0x0
		// static const ::System::Object PDDPIDJFIDB; // 0x0
		// static const ::System::Object IBJNBJNDPIK; // 0x0
		// static const ::System::Object GDNKJDNMILL; // 0x0
		// static const ::System::Object FAPGHBODPOE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIHMOOHIPC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OPIHMOOHIPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPIHMOOHIPC*))((::PBYTE)hIl2Cpp + OPIHMOOHIPC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPIHMOOHIPC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OPIHMOOHIPC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OPIHMOOHIPC*>*(*)())((::PBYTE)hIl2Cpp + OPIHMOOHIPC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIHMOOHIPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OPIHMOOHIPC* Clone()
		{
			return ((::OPIHMOOHIPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIHMOOHIPC_CLONE_OFFSET))(this);
		}

		::System::Boolean LAIBDDKPHCA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIHMOOHIPC_LAIBDDKPHCA_OFFSET))(this);
		}

		::System::Void DLBJCOEDMIN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OPIHMOOHIPC_DLBJCOEDMIN_OFFSET))(this, a1);
		}

		::DILHPBMCOFK GJADKBNFLPP()
		{
			return ((::DILHPBMCOFK(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIHMOOHIPC_GJADKBNFLPP_OFFSET))(this);
		}

		::System::Void GKMJBFOINMH(::DILHPBMCOFK a1)
		{
			return ((::System::Void(*)(::PVOID, ::DILHPBMCOFK))((::PBYTE)hIl2Cpp + OPIHMOOHIPC_GKMJBFOINMH_OFFSET))(this, a1);
		}

		::System::UInt32 PJLEOJKPGAJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIHMOOHIPC_PJLEOJKPGAJ_OFFSET))(this);
		}

		::System::Void GNBIPGJGOAJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OPIHMOOHIPC_GNBIPGJGOAJ_OFFSET))(this, a1);
		}

		::System::Boolean ICMCGHDHBMJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIHMOOHIPC_ICMCGHDHBMJ_OFFSET))(this);
		}

		::System::Void BCECGGBFEHK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OPIHMOOHIPC_BCECGGBFEHK_OFFSET))(this, a1);
		}

		::System::UInt64 DBFHLAPFFPP()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIHMOOHIPC_DBFHLAPFFPP_OFFSET))(this);
		}

		::System::Void CIBEMIPAPLH(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + OPIHMOOHIPC_CIBEMIPAPLH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OPIHMOOHIPC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OPIHMOOHIPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OPIHMOOHIPC*))((::PBYTE)hIl2Cpp + OPIHMOOHIPC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIHMOOHIPC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIHMOOHIPC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OPIHMOOHIPC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIHMOOHIPC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OPIHMOOHIPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPIHMOOHIPC*))((::PBYTE)hIl2Cpp + OPIHMOOHIPC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OPIHMOOHIPC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
