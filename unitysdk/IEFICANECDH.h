#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEFICANECDH;
class IIMHLPBEDDH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IEFICANECDH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E60B8E0)
#define IEFICANECDH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E60BDD0)
#define IEFICANECDH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E60B320)
#define IEFICANECDH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E60B290)
#define IEFICANECDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E60B280)
#define IEFICANECDH_EBAOCGGBDFK_OFFSET UNITYSDK_OFFSET(0x1E60B430)
#define IEFICANECDH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E60B570)
#define IEFICANECDH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E60B440)
#define IEFICANECDH_FFBGMLAOCND_OFFSET UNITYSDK_OFFSET(0x1E60B400)
#define IEFICANECDH_FOFMIHADABG_OFFSET UNITYSDK_OFFSET(0x1E60B420)
#define IEFICANECDH_GAKBCHBEADA_OFFSET UNITYSDK_OFFSET(0x1E60B410)
#define IEFICANECDH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E60B700)
#define IEFICANECDH_GKGFKFIHLLF_OFFSET UNITYSDK_OFFSET(0x1E60B3F0)
#define IEFICANECDH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E60B210)
#define IEFICANECDH_JPMIFNJDFKJ_OFFSET UNITYSDK_OFFSET(0x1E60B3E0)
#define IEFICANECDH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E60BB70)
#define IEFICANECDH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E60BA30)
#define IEFICANECDH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E60B270)
#define IEFICANECDH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E60B740)
#define IEFICANECDH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E60B7A0)

inline static constexpr unsigned int IEFICANECDH_TypeDefinitionIndex = 27723;

	class IEFICANECDH : public ::System::Object
	{
	public:
		::IIMHLPBEDDH* JBCLNBMJEGI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 BFCIKBDLJGJ; // 0x20
		::System::UInt32 BEIPFCCPIJB; // 0x24
		static ::Google::Protobuf::MessageParser_1<::IEFICANECDH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IEFICANECDH*>**)UnitySDK::FromName("", "IEFICANECDH")->GetStaticField(0x479E0);
		}

		// static const ::System::Object IOGFJMEOKMF; // 0x0
		// static const ::System::Object IPMBLBMLNIC; // 0x0
		// static const ::System::Object DFLDAOLENMB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFICANECDH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IEFICANECDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEFICANECDH*))((::PBYTE)hIl2Cpp + IEFICANECDH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEFICANECDH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IEFICANECDH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IEFICANECDH*>*(*)())((::PBYTE)hIl2Cpp + IEFICANECDH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFICANECDH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IEFICANECDH* Clone()
		{
			return ((::IEFICANECDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFICANECDH_CLONE_OFFSET))(this);
		}

		::System::UInt32 JPMIFNJDFKJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFICANECDH_JPMIFNJDFKJ_OFFSET))(this);
		}

		::System::Void GKGFKFIHLLF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IEFICANECDH_GKGFKFIHLLF_OFFSET))(this, a1);
		}

		::IIMHLPBEDDH* FFBGMLAOCND()
		{
			return ((::IIMHLPBEDDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFICANECDH_FFBGMLAOCND_OFFSET))(this);
		}

		::System::Void GAKBCHBEADA(::IIMHLPBEDDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIMHLPBEDDH*))((::PBYTE)hIl2Cpp + IEFICANECDH_GAKBCHBEADA_OFFSET))(this, a1);
		}

		::System::UInt32 FOFMIHADABG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFICANECDH_FOFMIHADABG_OFFSET))(this);
		}

		::System::Void EBAOCGGBDFK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IEFICANECDH_EBAOCGGBDFK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IEFICANECDH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IEFICANECDH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IEFICANECDH*))((::PBYTE)hIl2Cpp + IEFICANECDH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFICANECDH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFICANECDH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IEFICANECDH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFICANECDH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IEFICANECDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEFICANECDH*))((::PBYTE)hIl2Cpp + IEFICANECDH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IEFICANECDH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
