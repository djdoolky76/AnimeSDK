#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEMAPGKPPJA;
class FJKGDHKKDFF;
class LMNCBIDKHLF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AEMAPGKPPJA_ABFHNNJEOHB_OFFSET UNITYSDK_OFFSET(0x1DDC0D50)
#define AEMAPGKPPJA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0E1370)
#define AEMAPGKPPJA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0E1800)
#define AEMAPGKPPJA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDC0D00)
#define AEMAPGKPPJA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDC0C00)
#define AEMAPGKPPJA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDC0BB0)
#define AEMAPGKPPJA_ECHDMGFPOAC_OFFSET UNITYSDK_OFFSET(0x1E0E0CE0)
#define AEMAPGKPPJA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0E0D50)
#define AEMAPGKPPJA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0E0D20)
#define AEMAPGKPPJA_FHKADBNOEKC_OFFSET UNITYSDK_OFFSET(0x1DDC0D30)
#define AEMAPGKPPJA_FJINLMGHNKB_OFFSET UNITYSDK_OFFSET(0x1E0E0CF0)
#define AEMAPGKPPJA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0E0F20)
#define AEMAPGKPPJA_HOHPJNOCCMD_OFFSET UNITYSDK_OFFSET(0x1E0E0D00)
#define AEMAPGKPPJA_HPOKAAGFPPH_OFFSET UNITYSDK_OFFSET(0x1E0E0CD0)
#define AEMAPGKPPJA_IHGCIGEDNAB_OFFSET UNITYSDK_OFFSET(0x1E0E0D10)
#define AEMAPGKPPJA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDC0B70)
#define AEMAPGKPPJA_LJODPEHPKEF_OFFSET UNITYSDK_OFFSET(0x1E0E0CC0)
#define AEMAPGKPPJA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0E1660)
#define AEMAPGKPPJA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0E1550)
#define AEMAPGKPPJA_NJIPLEAJCJI_OFFSET UNITYSDK_OFFSET(0x1DDC0D40)
#define AEMAPGKPPJA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDC0BA0)
#define AEMAPGKPPJA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0E10F0)
#define AEMAPGKPPJA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0E1150)

inline static constexpr unsigned int AEMAPGKPPJA_TypeDefinitionIndex = 27309;

	class AEMAPGKPPJA : public ::System::Object
	{
	public:
		::LMNCBIDKHLF* JAHKOPEGMMI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::FJKGDHKKDFF* LHBHOJFAFIK; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NHJKOKEOBCA; // 0x28
		::System::Int32 EJGIJMCPJGJ; // 0x30
		::System::UInt32 ENCJIEMOPCH; // 0x34
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_GBBDIELKEFO()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "AEMAPGKPPJA")->GetStaticField(0x34250);
		}

		static ::Google::Protobuf::MessageParser_1<::AEMAPGKPPJA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AEMAPGKPPJA*>**)UnitySDK::FromName("", "AEMAPGKPPJA")->GetStaticField(0x34258);
		}

		// static const ::System::Object NKOFPBKLDFP; // 0x0
		// static const ::System::Object BECAFHLKEON; // 0x0
		// static const ::System::Object LEABPEFKOBB; // 0x0
		// static const ::System::Object LCPNIJHOFJH; // 0x0
		// static const ::System::Object JKGLELMDILK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMAPGKPPJA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AEMAPGKPPJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEMAPGKPPJA*))((::PBYTE)hIl2Cpp + AEMAPGKPPJA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEMAPGKPPJA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AEMAPGKPPJA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AEMAPGKPPJA*>*(*)())((::PBYTE)hIl2Cpp + AEMAPGKPPJA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMAPGKPPJA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AEMAPGKPPJA* Clone()
		{
			return ((::AEMAPGKPPJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMAPGKPPJA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FHKADBNOEKC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMAPGKPPJA_FHKADBNOEKC_OFFSET))(this);
		}

		::System::Int32 NJIPLEAJCJI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMAPGKPPJA_NJIPLEAJCJI_OFFSET))(this);
		}

		::System::Void ABFHNNJEOHB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AEMAPGKPPJA_ABFHNNJEOHB_OFFSET))(this, a1);
		}

		::System::UInt32 LJODPEHPKEF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMAPGKPPJA_LJODPEHPKEF_OFFSET))(this);
		}

		::System::Void HPOKAAGFPPH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AEMAPGKPPJA_HPOKAAGFPPH_OFFSET))(this, a1);
		}

		::LMNCBIDKHLF* ECHDMGFPOAC()
		{
			return ((::LMNCBIDKHLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMAPGKPPJA_ECHDMGFPOAC_OFFSET))(this);
		}

		::System::Void FJINLMGHNKB(::LMNCBIDKHLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMNCBIDKHLF*))((::PBYTE)hIl2Cpp + AEMAPGKPPJA_FJINLMGHNKB_OFFSET))(this, a1);
		}

		::FJKGDHKKDFF* HOHPJNOCCMD()
		{
			return ((::FJKGDHKKDFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMAPGKPPJA_HOHPJNOCCMD_OFFSET))(this);
		}

		::System::Void IHGCIGEDNAB(::FJKGDHKKDFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJKGDHKKDFF*))((::PBYTE)hIl2Cpp + AEMAPGKPPJA_IHGCIGEDNAB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AEMAPGKPPJA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AEMAPGKPPJA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AEMAPGKPPJA*))((::PBYTE)hIl2Cpp + AEMAPGKPPJA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMAPGKPPJA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMAPGKPPJA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AEMAPGKPPJA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMAPGKPPJA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AEMAPGKPPJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEMAPGKPPJA*))((::PBYTE)hIl2Cpp + AEMAPGKPPJA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AEMAPGKPPJA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
