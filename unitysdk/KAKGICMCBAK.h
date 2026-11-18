#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FGMBFEDHOEM;
class HAAIBELPFNL;
namespace System { class String; }

#define KAKGICMCBAK_FCIHCLODCAM_OFFSET UNITYSDK_OFFSET(0x1D993130)
#define KAKGICMCBAK_GBJAPCNCKCP_OFFSET UNITYSDK_OFFSET(0x1D9933B0)
#define KAKGICMCBAK_KMDEMKKDPFN_OFFSET UNITYSDK_OFFSET(0x1D992790)
#define KAKGICMCBAK_NODKHHHFOJL_OFFSET UNITYSDK_OFFSET(0x1D993430)
#define KAKGICMCBAK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D992780)

inline static constexpr unsigned int KAKGICMCBAK_TypeDefinitionIndex = 93459;

class KAKGICMCBAK : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_BNNMGPHMDAA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(KAKGICMCBAK_TypeDefinitionIndex)->GetStaticField(0x13E60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAKGICMCBAK__CCTOR_OFFSET))();
	}

	static ::FGMBFEDHOEM* KMDEMKKDPFN(::System::Int32 ODFOJEMAEMA, ::HAAIBELPFNL* KAIIJABPIDA)
	{
		return ((::FGMBFEDHOEM*(*)(::System::Int32, ::HAAIBELPFNL*))((::PBYTE)hIl2Cpp + KAKGICMCBAK_KMDEMKKDPFN_OFFSET))(ODFOJEMAEMA, KAIIJABPIDA);
	}

	static ::System::Void NODKHHHFOJL()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAKGICMCBAK_NODKHHHFOJL_OFFSET))();
	}

	static ::System::Int32 GBJAPCNCKCP()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + KAKGICMCBAK_GBJAPCNCKCP_OFFSET))();
	}

	static ::System::Int32 FCIHCLODCAM(::System::String* FBMEFMFDPAN)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + KAKGICMCBAK_FCIHCLODCAM_OFFSET))(FBMEFMFDPAN);
	}
};
