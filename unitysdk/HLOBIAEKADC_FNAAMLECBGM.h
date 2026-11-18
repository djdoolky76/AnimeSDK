#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLJOBAKGEP.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define HLOBIAEKADC_FNAAMLECBGM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1011ECA0)
#define HLOBIAEKADC_FNAAMLECBGM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1011ED50)
#define HLOBIAEKADC_FNAAMLECBGM_INVOKE_OFFSET UNITYSDK_OFFSET(0x1011D2A0)
#define HLOBIAEKADC_FNAAMLECBGM__CTOR_OFFSET UNITYSDK_OFFSET(0x1011DD20)

inline static constexpr unsigned int HLOBIAEKADC_FNAAMLECBGM_TypeDefinitionIndex = 61911;

class HLOBIAEKADC_FNAAMLECBGM : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HLOBIAEKADC_FNAAMLECBGM__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::HBLJOBAKGEP Invoke(::System::Int32 HNOPAJLDCFB, ::System::Int32& BBBFMDJILAD, ::System::Int32& CJDFPHLJNBP)
	{
		return ((::HBLJOBAKGEP(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + HLOBIAEKADC_FNAAMLECBGM_INVOKE_OFFSET))(this, HNOPAJLDCFB, BBBFMDJILAD, CJDFPHLJNBP);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 HNOPAJLDCFB, ::System::Int32& BBBFMDJILAD, ::System::Int32& CJDFPHLJNBP, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Int32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + HLOBIAEKADC_FNAAMLECBGM_BEGININVOKE_OFFSET))(this, HNOPAJLDCFB, BBBFMDJILAD, CJDFPHLJNBP, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::HBLJOBAKGEP EndInvoke(::System::Int32& BBBFMDJILAD, ::System::Int32& CJDFPHLJNBP, ::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::HBLJOBAKGEP(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + HLOBIAEKADC_FNAAMLECBGM_ENDINVOKE_OFFSET))(this, BBBFMDJILAD, CJDFPHLJNBP, IGAAKDOIPNN);
	}
};
