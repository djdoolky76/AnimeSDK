#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENEKCKAHDIM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ENEKCKAHDIM_AFADJMFGCGN_OFFSET UNITYSDK_OFFSET(0x1E2EBB60)
#define ENEKCKAHDIM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2EC110)
#define ENEKCKAHDIM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2EC390)
#define ENEKCKAHDIM_CLHOECGMLFH_OFFSET UNITYSDK_OFFSET(0x1E2EBB70)
#define ENEKCKAHDIM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2EBAE0)
#define ENEKCKAHDIM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2EBA90)
#define ENEKCKAHDIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2EBA80)
#define ENEKCKAHDIM_DKDLBLLMPNE_OFFSET UNITYSDK_OFFSET(0x1E2EBB50)
#define ENEKCKAHDIM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2EBBF0)
#define ENEKCKAHDIM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2EBBC0)
#define ENEKCKAHDIM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2EBE00)
#define ENEKCKAHDIM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2EBA40)
#define ENEKCKAHDIM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2EC1E0)
#define ENEKCKAHDIM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2EC180)
#define ENEKCKAHDIM_MNLDMBGAJIF_OFFSET UNITYSDK_OFFSET(0x1E2EBB40)
#define ENEKCKAHDIM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2EBA70)
#define ENEKCKAHDIM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2EBFB0)
#define ENEKCKAHDIM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2EC010)

inline static constexpr unsigned int ENEKCKAHDIM_TypeDefinitionIndex = 33976;

	class ENEKCKAHDIM : public ::System::Object
	{
	public:
		::System::String* PDKNJCIEBHA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Single DFKHBNCHKBI; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ENEKCKAHDIM")->GetStaticField(0x54550);
		}

		// static const ::System::Object JLAAHBJNEML; // 0x0
		// static const ::System::Object AFBDHEMJEPP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEKCKAHDIM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ENEKCKAHDIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENEKCKAHDIM*))((::PBYTE)hIl2Cpp + ENEKCKAHDIM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENEKCKAHDIM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ENEKCKAHDIM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEKCKAHDIM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ENEKCKAHDIM* Clone()
		{
			return ((::ENEKCKAHDIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEKCKAHDIM_CLONE_OFFSET))(this);
		}

		::System::Single MNLDMBGAJIF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEKCKAHDIM_MNLDMBGAJIF_OFFSET))(this);
		}

		::System::Void DKDLBLLMPNE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENEKCKAHDIM_DKDLBLLMPNE_OFFSET))(this, a1);
		}

		::System::String* AFADJMFGCGN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEKCKAHDIM_AFADJMFGCGN_OFFSET))(this);
		}

		::System::Void CLHOECGMLFH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENEKCKAHDIM_CLHOECGMLFH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENEKCKAHDIM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ENEKCKAHDIM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENEKCKAHDIM*))((::PBYTE)hIl2Cpp + ENEKCKAHDIM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEKCKAHDIM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEKCKAHDIM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ENEKCKAHDIM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEKCKAHDIM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ENEKCKAHDIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENEKCKAHDIM*))((::PBYTE)hIl2Cpp + ENEKCKAHDIM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ENEKCKAHDIM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
