#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIIGIPHOJAC;
class HEBIIBBMNKG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DIIGIPHOJAC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1BEE00)
#define DIIGIPHOJAC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1BF100)
#define DIIGIPHOJAC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1BE890)
#define DIIGIPHOJAC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1BE810)
#define DIIGIPHOJAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BE800)
#define DIIGIPHOJAC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1BEAE0)
#define DIIGIPHOJAC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1BE960)
#define DIIGIPHOJAC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1BE950)
#define DIIGIPHOJAC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1BEC60)
#define DIIGIPHOJAC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1BE7C0)
#define DIIGIPHOJAC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1BEF70)
#define DIIGIPHOJAC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1BEED0)
#define DIIGIPHOJAC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1BE940)
#define DIIGIPHOJAC_OJKOJFFGNDK_OFFSET UNITYSDK_OFFSET(0x1E1BE920)
#define DIIGIPHOJAC_PAEAJNGCDFM_OFFSET UNITYSDK_OFFSET(0x1E1BE930)
#define DIIGIPHOJAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1BE7F0)
#define DIIGIPHOJAC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1BECC0)
#define DIIGIPHOJAC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1BED20)

inline static constexpr unsigned int DIIGIPHOJAC_TypeDefinitionIndex = 26448;

	class DIIGIPHOJAC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::HEBIIBBMNKG* FKAOMBKACGA; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DIIGIPHOJAC")->GetStaticField(0x36440);
		}

		// static const ::System::Object DEIJGADJJIG; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIGIPHOJAC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DIIGIPHOJAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIIGIPHOJAC*))((::PBYTE)hIl2Cpp + DIIGIPHOJAC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIIGIPHOJAC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DIIGIPHOJAC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIGIPHOJAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DIIGIPHOJAC* Clone()
		{
			return ((::DIIGIPHOJAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIGIPHOJAC_CLONE_OFFSET))(this);
		}

		::HEBIIBBMNKG* OJKOJFFGNDK()
		{
			return ((::HEBIIBBMNKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIGIPHOJAC_OJKOJFFGNDK_OFFSET))(this);
		}

		::System::Void PAEAJNGCDFM(::HEBIIBBMNKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEBIIBBMNKG*))((::PBYTE)hIl2Cpp + DIIGIPHOJAC_PAEAJNGCDFM_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIGIPHOJAC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DIIGIPHOJAC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DIIGIPHOJAC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DIIGIPHOJAC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DIIGIPHOJAC*))((::PBYTE)hIl2Cpp + DIIGIPHOJAC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIGIPHOJAC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIGIPHOJAC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DIIGIPHOJAC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIGIPHOJAC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DIIGIPHOJAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIIGIPHOJAC*))((::PBYTE)hIl2Cpp + DIIGIPHOJAC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DIIGIPHOJAC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
