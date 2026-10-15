#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLFAKEOBFAB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HLFAKEOBFAB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5BCFF0)
#define HLFAKEOBFAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5BD390)
#define HLFAKEOBFAB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5BCBD0)
#define HLFAKEOBFAB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5BCB90)
#define HLFAKEOBFAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5BCB80)
#define HLFAKEOBFAB_DNGEOHDDIHA_OFFSET UNITYSDK_OFFSET(0x1E5BCC30)
#define HLFAKEOBFAB_EBEAOBJBOJM_OFFSET UNITYSDK_OFFSET(0x1E5BCC40)
#define HLFAKEOBFAB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5BCD60)
#define HLFAKEOBFAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5BCC80)
#define HLFAKEOBFAB_FAHNIHCFNOG_OFFSET UNITYSDK_OFFSET(0x1E5BCC20)
#define HLFAKEOBFAB_FCEPICBPILK_OFFSET UNITYSDK_OFFSET(0x1E5BCC70)
#define HLFAKEOBFAB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5BCE30)
#define HLFAKEOBFAB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5BCB40)
#define HLFAKEOBFAB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5BD1D0)
#define HLFAKEOBFAB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5BD180)
#define HLFAKEOBFAB_MFHIDCCGMFD_OFFSET UNITYSDK_OFFSET(0x1E5BCC60)
#define HLFAKEOBFAB_OLJFAHDLKBG_OFFSET UNITYSDK_OFFSET(0x1E5BCC50)
#define HLFAKEOBFAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5BCB70)
#define HLFAKEOBFAB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5BCE60)
#define HLFAKEOBFAB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5BCEC0)

	class HLFAKEOBFAB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NLHICLKJLMP; // 0x18
		::System::UInt32 LAHOAHEACKM; // 0x1C
		::System::UInt32 DDKDAHKMBFL; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HLFAKEOBFAB")->GetStaticField(0x47C20);
		}

		// static const ::System::Object OBJDFPPBDAA; // 0x0
		// static const ::System::Object OJONKEDJHFA; // 0x0
		// static const ::System::Object BDIGCOKBPGO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFAKEOBFAB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HLFAKEOBFAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLFAKEOBFAB*))((::PBYTE)hIl2Cpp + HLFAKEOBFAB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLFAKEOBFAB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HLFAKEOBFAB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFAKEOBFAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HLFAKEOBFAB* Clone()
		{
			return ((::HLFAKEOBFAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFAKEOBFAB_CLONE_OFFSET))(this);
		}

		::System::UInt32 FAHNIHCFNOG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFAKEOBFAB_FAHNIHCFNOG_OFFSET))(this);
		}

		::System::Void DNGEOHDDIHA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLFAKEOBFAB_DNGEOHDDIHA_OFFSET))(this, a1);
		}

		::System::UInt32 EBEAOBJBOJM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFAKEOBFAB_EBEAOBJBOJM_OFFSET))(this);
		}

		::System::Void OLJFAHDLKBG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLFAKEOBFAB_OLJFAHDLKBG_OFFSET))(this, a1);
		}

		::System::UInt32 MFHIDCCGMFD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFAKEOBFAB_MFHIDCCGMFD_OFFSET))(this);
		}

		::System::Void FCEPICBPILK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLFAKEOBFAB_FCEPICBPILK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLFAKEOBFAB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HLFAKEOBFAB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HLFAKEOBFAB*))((::PBYTE)hIl2Cpp + HLFAKEOBFAB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFAKEOBFAB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFAKEOBFAB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HLFAKEOBFAB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFAKEOBFAB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HLFAKEOBFAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLFAKEOBFAB*))((::PBYTE)hIl2Cpp + HLFAKEOBFAB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HLFAKEOBFAB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
