#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JKIFFNPPLLD;
class NNPGLCGNICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JKIFFNPPLLD_BLBBMAGLFDL_OFFSET UNITYSDK_OFFSET(0x1E73E750)
#define JKIFFNPPLLD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E73EC70)
#define JKIFFNPPLLD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E73F000)
#define JKIFFNPPLLD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E73E690)
#define JKIFFNPPLLD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E73E620)
#define JKIFFNPPLLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E73E610)
#define JKIFFNPPLLD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E73E900)
#define JKIFFNPPLLD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E73E770)
#define JKIFFNPPLLD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E73E720)
#define JKIFFNPPLLD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E73EA90)
#define JKIFFNPPLLD_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1E73E740)
#define JKIFFNPPLLD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E73E5D0)
#define JKIFFNPPLLD_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1E73E730)
#define JKIFFNPPLLD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E73EE40)
#define JKIFFNPPLLD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E73EDB0)
#define JKIFFNPPLLD_MGBKGAPDHLG_OFFSET UNITYSDK_OFFSET(0x1E73E760)
#define JKIFFNPPLLD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E73E710)
#define JKIFFNPPLLD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E73E600)
#define JKIFFNPPLLD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E73EAD0)
#define JKIFFNPPLLD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E73EB30)

inline static constexpr unsigned int JKIFFNPPLLD_TypeDefinitionIndex = 34308;

	class JKIFFNPPLLD : public ::System::Object
	{
	public:
		::NNPGLCGNICI* LKDEFKKLEDJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 HJEGLCJEOKC; // 0x24
		static ::Google::Protobuf::MessageParser_1<::JKIFFNPPLLD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JKIFFNPPLLD*>**)UnitySDK::FromName("", "JKIFFNPPLLD")->GetStaticField(0x63460);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object IEIFMNNMINA; // 0x0
		// static const ::System::Object HNBHJOFPFLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIFFNPPLLD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JKIFFNPPLLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKIFFNPPLLD*))((::PBYTE)hIl2Cpp + JKIFFNPPLLD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKIFFNPPLLD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JKIFFNPPLLD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JKIFFNPPLLD*>*(*)())((::PBYTE)hIl2Cpp + JKIFFNPPLLD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIFFNPPLLD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JKIFFNPPLLD* Clone()
		{
			return ((::JKIFFNPPLLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIFFNPPLLD_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIFFNPPLLD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKIFFNPPLLD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIFFNPPLLD_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKIFFNPPLLD_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::NNPGLCGNICI* BLBBMAGLFDL()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIFFNPPLLD_BLBBMAGLFDL_OFFSET))(this);
		}

		::System::Void MGBKGAPDHLG(::NNPGLCGNICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNPGLCGNICI*))((::PBYTE)hIl2Cpp + JKIFFNPPLLD_MGBKGAPDHLG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JKIFFNPPLLD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JKIFFNPPLLD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JKIFFNPPLLD*))((::PBYTE)hIl2Cpp + JKIFFNPPLLD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIFFNPPLLD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIFFNPPLLD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JKIFFNPPLLD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIFFNPPLLD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JKIFFNPPLLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKIFFNPPLLD*))((::PBYTE)hIl2Cpp + JKIFFNPPLLD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JKIFFNPPLLD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
