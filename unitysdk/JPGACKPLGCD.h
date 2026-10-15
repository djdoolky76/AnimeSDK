#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPGACKPLGCD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JPGACKPLGCD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7D2BE0)
#define JPGACKPLGCD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7D2E20)
#define JPGACKPLGCD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7D26C0)
#define JPGACKPLGCD_CMMFHOJEFOA_OFFSET UNITYSDK_OFFSET(0x1E7D2740)
#define JPGACKPLGCD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7D2680)
#define JPGACKPLGCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D2670)
#define JPGACKPLGCD_DNNGOAPBCJL_OFFSET UNITYSDK_OFFSET(0x1E7D2730)
#define JPGACKPLGCD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7D2880)
#define JPGACKPLGCD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7D2770)
#define JPGACKPLGCD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7D2980)
#define JPGACKPLGCD_HCLANPHEMMC_OFFSET UNITYSDK_OFFSET(0x1E7D2710)
#define JPGACKPLGCD_ICGJKFLGPEI_OFFSET UNITYSDK_OFFSET(0x1E7D2760)
#define JPGACKPLGCD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7D2630)
#define JPGACKPLGCD_LJNGICLEIPG_OFFSET UNITYSDK_OFFSET(0x1E7D2720)
#define JPGACKPLGCD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7D2C70)
#define JPGACKPLGCD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7D2C20)
#define JPGACKPLGCD_NEJPBJKEHDL_OFFSET UNITYSDK_OFFSET(0x1E7D2750)
#define JPGACKPLGCD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7D2660)
#define JPGACKPLGCD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7D29B0)
#define JPGACKPLGCD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7D2A10)

inline static constexpr unsigned int JPGACKPLGCD_TypeDefinitionIndex = 25360;

	class JPGACKPLGCD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean IDNGAOCKIHF; // 0x18
		::System::Boolean DLBHFFAKJEF; // 0x19
		::System::Boolean ANGJKIOCFBI; // 0x1A
		static ::Google::Protobuf::MessageParser_1<::JPGACKPLGCD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JPGACKPLGCD*>**)UnitySDK::FromName("", "JPGACKPLGCD")->GetStaticField(0xAD00);
		}

		// static const ::System::Object ONGAHKAHENP; // 0x0
		// static const ::System::Object HCBKMHAAGGM; // 0x0
		// static const ::System::Object KBEEBCIJCKO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGACKPLGCD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JPGACKPLGCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPGACKPLGCD*))((::PBYTE)hIl2Cpp + JPGACKPLGCD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPGACKPLGCD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JPGACKPLGCD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JPGACKPLGCD*>*(*)())((::PBYTE)hIl2Cpp + JPGACKPLGCD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGACKPLGCD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JPGACKPLGCD* Clone()
		{
			return ((::JPGACKPLGCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGACKPLGCD_CLONE_OFFSET))(this);
		}

		::System::Boolean HCLANPHEMMC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGACKPLGCD_HCLANPHEMMC_OFFSET))(this);
		}

		::System::Void LJNGICLEIPG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JPGACKPLGCD_LJNGICLEIPG_OFFSET))(this, a1);
		}

		::System::Boolean DNNGOAPBCJL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGACKPLGCD_DNNGOAPBCJL_OFFSET))(this);
		}

		::System::Void CMMFHOJEFOA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JPGACKPLGCD_CMMFHOJEFOA_OFFSET))(this, a1);
		}

		::System::Boolean NEJPBJKEHDL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGACKPLGCD_NEJPBJKEHDL_OFFSET))(this);
		}

		::System::Void ICGJKFLGPEI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JPGACKPLGCD_ICGJKFLGPEI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JPGACKPLGCD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JPGACKPLGCD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JPGACKPLGCD*))((::PBYTE)hIl2Cpp + JPGACKPLGCD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGACKPLGCD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGACKPLGCD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JPGACKPLGCD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGACKPLGCD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JPGACKPLGCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPGACKPLGCD*))((::PBYTE)hIl2Cpp + JPGACKPLGCD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JPGACKPLGCD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
