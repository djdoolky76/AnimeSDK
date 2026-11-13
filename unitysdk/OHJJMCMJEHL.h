#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHJJMCMJEHL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OHJJMCMJEHL_BBNMNMJFMPK_OFFSET UNITYSDK_OFFSET(0x1FCE2110)
#define OHJJMCMJEHL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FCE25F0)
#define OHJJMCMJEHL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCE2960)
#define OHJJMCMJEHL_CLONE_OFFSET UNITYSDK_OFFSET(0x1FCE2090)
#define OHJJMCMJEHL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FCE1FF0)
#define OHJJMCMJEHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCE1FA0)
#define OHJJMCMJEHL_ECKPLNHEHGD_OFFSET UNITYSDK_OFFSET(0x1FCE2100)
#define OHJJMCMJEHL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FCE21F0)
#define OHJJMCMJEHL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FCE2150)
#define OHJJMCMJEHL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FCE2280)
#define OHJJMCMJEHL_GNAMNDMKGMP_OFFSET UNITYSDK_OFFSET(0x1FCE20C0)
#define OHJJMCMJEHL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FCE1F60)
#define OHJJMCMJEHL_JOEBOFLFFKO_OFFSET UNITYSDK_OFFSET(0x1FCE2140)
#define OHJJMCMJEHL_KHLKKOICMAH_OFFSET UNITYSDK_OFFSET(0x1FCE2120)
#define OHJJMCMJEHL_LADHHMNCNMM_OFFSET UNITYSDK_OFFSET(0x1FCE20E0)
#define OHJJMCMJEHL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FCE2850)
#define OHJJMCMJEHL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FCE27E0)
#define OHJJMCMJEHL_ODBGNJPJJMA_OFFSET UNITYSDK_OFFSET(0x1FCE20F0)
#define OHJJMCMJEHL_OGCGGDEEKIJ_OFFSET UNITYSDK_OFFSET(0x1FCE20D0)
#define OHJJMCMJEHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FCE1F90)
#define OHJJMCMJEHL_PJONAGFPIDI_OFFSET UNITYSDK_OFFSET(0x1FCE2130)
#define OHJJMCMJEHL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FCE2380)
#define OHJJMCMJEHL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FCE23E0)

inline static constexpr unsigned int OHJJMCMJEHL_TypeDefinitionIndex = 34071;

	class OHJJMCMJEHL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HDIDEJOJMGH; // 0x18
		::System::Boolean NCEBPOENMFG; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 IBGIDPHINDH; // 0x24
		::System::UInt32 BJJEIECJFJH; // 0x28
		::System::UInt32 LBGPNGKAOPF; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::OHJJMCMJEHL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OHJJMCMJEHL*>**)UnitySDK::FromName("", "OHJJMCMJEHL")->GetStaticField(0x17230);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_IGMCFHGJDIF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "OHJJMCMJEHL")->GetStaticField(0x17238);
		}

		// static const ::System::Object KJOFBAAHDCO; // 0x0
		// static const ::System::Object EAGILFBCKJH; // 0x0
		// static const ::System::Object EJMKHPFLDAP; // 0x0
		// static const ::System::Object NBCECAHLGLM; // 0x0
		// static const ::System::Object CGAABLJBAAI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHJJMCMJEHL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OHJJMCMJEHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHJJMCMJEHL*))((::PBYTE)hIl2Cpp + OHJJMCMJEHL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHJJMCMJEHL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OHJJMCMJEHL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OHJJMCMJEHL*>*(*)())((::PBYTE)hIl2Cpp + OHJJMCMJEHL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHJJMCMJEHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OHJJMCMJEHL* Clone()
		{
			return ((::OHJJMCMJEHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHJJMCMJEHL_CLONE_OFFSET))(this);
		}

		::System::UInt32 GNAMNDMKGMP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHJJMCMJEHL_GNAMNDMKGMP_OFFSET))(this);
		}

		::System::Void OGCGGDEEKIJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OHJJMCMJEHL_OGCGGDEEKIJ_OFFSET))(this, a1);
		}

		::System::Boolean LADHHMNCNMM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OHJJMCMJEHL_LADHHMNCNMM_OFFSET))(this);
		}

		::System::Void ODBGNJPJJMA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OHJJMCMJEHL_ODBGNJPJJMA_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ECKPLNHEHGD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHJJMCMJEHL_ECKPLNHEHGD_OFFSET))(this);
		}

		::System::UInt32 BBNMNMJFMPK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHJJMCMJEHL_BBNMNMJFMPK_OFFSET))(this);
		}

		::System::Void KHLKKOICMAH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OHJJMCMJEHL_KHLKKOICMAH_OFFSET))(this, a1);
		}

		::System::UInt32 PJONAGFPIDI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHJJMCMJEHL_PJONAGFPIDI_OFFSET))(this);
		}

		::System::Void JOEBOFLFFKO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OHJJMCMJEHL_JOEBOFLFFKO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OHJJMCMJEHL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OHJJMCMJEHL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OHJJMCMJEHL*))((::PBYTE)hIl2Cpp + OHJJMCMJEHL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHJJMCMJEHL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHJJMCMJEHL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OHJJMCMJEHL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHJJMCMJEHL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OHJJMCMJEHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHJJMCMJEHL*))((::PBYTE)hIl2Cpp + OHJJMCMJEHL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OHJJMCMJEHL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
