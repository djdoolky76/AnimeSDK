#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGMIABHEJNB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PGMIABHEJNB_BBNMNMJFMPK_OFFSET UNITYSDK_OFFSET(0x1DF34C60)
#define PGMIABHEJNB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF35160)
#define PGMIABHEJNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF35420)
#define PGMIABHEJNB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF34C00)
#define PGMIABHEJNB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF34B60)
#define PGMIABHEJNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF34B10)
#define PGMIABHEJNB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF34D30)
#define PGMIABHEJNB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF34CA0)
#define PGMIABHEJNB_FKAFPODOJCJ_OFFSET UNITYSDK_OFFSET(0x1DF34C50)
#define PGMIABHEJNB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF34E40)
#define PGMIABHEJNB_GNAMNDMKGMP_OFFSET UNITYSDK_OFFSET(0x1DF34C30)
#define PGMIABHEJNB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF34AD0)
#define PGMIABHEJNB_KHLKKOICMAH_OFFSET UNITYSDK_OFFSET(0x1DF34C70)
#define PGMIABHEJNB_LADHHMNCNMM_OFFSET UNITYSDK_OFFSET(0x1DF34C80)
#define PGMIABHEJNB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF35330)
#define PGMIABHEJNB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF352D0)
#define PGMIABHEJNB_ODBGNJPJJMA_OFFSET UNITYSDK_OFFSET(0x1DF34C90)
#define PGMIABHEJNB_OGCGGDEEKIJ_OFFSET UNITYSDK_OFFSET(0x1DF34C40)
#define PGMIABHEJNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF34B00)
#define PGMIABHEJNB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF34F40)
#define PGMIABHEJNB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF34FA0)

inline static constexpr unsigned int PGMIABHEJNB_TypeDefinitionIndex = 33148;

	class PGMIABHEJNB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JFMGFDPMLAD; // 0x18
		::System::UInt32 LBGPNGKAOPF; // 0x20
		::System::Boolean NCEBPOENMFG; // 0x24
		::System::Byte _padding0[0x3];
		::System::UInt32 BJJEIECJFJH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::PGMIABHEJNB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PGMIABHEJNB*>**)UnitySDK::FromName("", "PGMIABHEJNB")->GetStaticField(0x3E6C0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KDMLDLAALMJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PGMIABHEJNB")->GetStaticField(0x3E6C8);
		}

		// static const ::System::Object KJOFBAAHDCO; // 0x0
		// static const ::System::Object FPLLIAKKBOL; // 0x0
		// static const ::System::Object NBCECAHLGLM; // 0x0
		// static const ::System::Object EAGILFBCKJH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGMIABHEJNB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PGMIABHEJNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGMIABHEJNB*))((::PBYTE)hIl2Cpp + PGMIABHEJNB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGMIABHEJNB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PGMIABHEJNB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PGMIABHEJNB*>*(*)())((::PBYTE)hIl2Cpp + PGMIABHEJNB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGMIABHEJNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PGMIABHEJNB* Clone()
		{
			return ((::PGMIABHEJNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGMIABHEJNB_CLONE_OFFSET))(this);
		}

		::System::UInt32 GNAMNDMKGMP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGMIABHEJNB_GNAMNDMKGMP_OFFSET))(this);
		}

		::System::Void OGCGGDEEKIJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PGMIABHEJNB_OGCGGDEEKIJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FKAFPODOJCJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGMIABHEJNB_FKAFPODOJCJ_OFFSET))(this);
		}

		::System::UInt32 BBNMNMJFMPK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGMIABHEJNB_BBNMNMJFMPK_OFFSET))(this);
		}

		::System::Void KHLKKOICMAH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PGMIABHEJNB_KHLKKOICMAH_OFFSET))(this, a1);
		}

		::System::Boolean LADHHMNCNMM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PGMIABHEJNB_LADHHMNCNMM_OFFSET))(this);
		}

		::System::Void ODBGNJPJJMA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PGMIABHEJNB_ODBGNJPJJMA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PGMIABHEJNB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PGMIABHEJNB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PGMIABHEJNB*))((::PBYTE)hIl2Cpp + PGMIABHEJNB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGMIABHEJNB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGMIABHEJNB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PGMIABHEJNB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGMIABHEJNB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PGMIABHEJNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGMIABHEJNB*))((::PBYTE)hIl2Cpp + PGMIABHEJNB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PGMIABHEJNB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
