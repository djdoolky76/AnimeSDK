#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNBOHDBLMBE;
class JOFCAOFIHCD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HNBOHDBLMBE_BMOOOFIGOAA_OFFSET UNITYSDK_OFFSET(0x1E5ABD50)
#define HNBOHDBLMBE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5AC2C0)
#define HNBOHDBLMBE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5AC670)
#define HNBOHDBLMBE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5ABD00)
#define HNBOHDBLMBE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5ABC40)
#define HNBOHDBLMBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5ABBF0)
#define HNBOHDBLMBE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5ABF20)
#define HNBOHDBLMBE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5ABDA0)
#define HNBOHDBLMBE_FJIFBIACNPL_OFFSET UNITYSDK_OFFSET(0x1E5ABD60)
#define HNBOHDBLMBE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5AC050)
#define HNBOHDBLMBE_IFPBNJLJCFN_OFFSET UNITYSDK_OFFSET(0x1E5ABD70)
#define HNBOHDBLMBE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5ABB80)
#define HNBOHDBLMBE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5AC480)
#define HNBOHDBLMBE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5AC3D0)
#define HNBOHDBLMBE_OHKOLMODGMD_OFFSET UNITYSDK_OFFSET(0x1E5ABD80)
#define HNBOHDBLMBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5ABBE0)
#define HNBOHDBLMBE_PGMKHOILPMM_OFFSET UNITYSDK_OFFSET(0x1E5ABD90)
#define HNBOHDBLMBE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5AC0C0)
#define HNBOHDBLMBE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5AC120)

inline static constexpr unsigned int HNBOHDBLMBE_TypeDefinitionIndex = 28689;

	class HNBOHDBLMBE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::JOFCAOFIHCD*>* PNHEGBHHCAL; // 0x18
		::System::UInt32 NAOCMEBMMNJ; // 0x20
		::System::Boolean GDMPEPCIGPH; // 0x24
		static ::Google::Protobuf::FieldCodec_1<::JOFCAOFIHCD*>** StaticGet_MNKLBOPJFDP()
		{
			return (::Google::Protobuf::FieldCodec_1<::JOFCAOFIHCD*>**)UnitySDK::FromName("", "HNBOHDBLMBE")->GetStaticField(0x383E0);
		}

		static ::Google::Protobuf::MessageParser_1<::HNBOHDBLMBE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HNBOHDBLMBE*>**)UnitySDK::FromName("", "HNBOHDBLMBE")->GetStaticField(0x383E8);
		}

		// static const ::System::Object LFGMICHAPCJ; // 0x0
		// static const ::System::Object MMOGNJMPKOI; // 0x0
		// static const ::System::Object EOANNFDEMEK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBOHDBLMBE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HNBOHDBLMBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNBOHDBLMBE*))((::PBYTE)hIl2Cpp + HNBOHDBLMBE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNBOHDBLMBE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HNBOHDBLMBE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HNBOHDBLMBE*>*(*)())((::PBYTE)hIl2Cpp + HNBOHDBLMBE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBOHDBLMBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HNBOHDBLMBE* Clone()
		{
			return ((::HNBOHDBLMBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBOHDBLMBE_CLONE_OFFSET))(this);
		}

		::System::UInt32 BMOOOFIGOAA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBOHDBLMBE_BMOOOFIGOAA_OFFSET))(this);
		}

		::System::Void FJIFBIACNPL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HNBOHDBLMBE_FJIFBIACNPL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JOFCAOFIHCD*>* IFPBNJLJCFN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JOFCAOFIHCD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBOHDBLMBE_IFPBNJLJCFN_OFFSET))(this);
		}

		::System::Boolean OHKOLMODGMD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBOHDBLMBE_OHKOLMODGMD_OFFSET))(this);
		}

		::System::Void PGMKHOILPMM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HNBOHDBLMBE_PGMKHOILPMM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HNBOHDBLMBE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HNBOHDBLMBE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HNBOHDBLMBE*))((::PBYTE)hIl2Cpp + HNBOHDBLMBE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBOHDBLMBE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBOHDBLMBE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HNBOHDBLMBE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBOHDBLMBE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HNBOHDBLMBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNBOHDBLMBE*))((::PBYTE)hIl2Cpp + HNBOHDBLMBE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HNBOHDBLMBE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
