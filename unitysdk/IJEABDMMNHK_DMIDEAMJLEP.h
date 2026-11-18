#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Foundation/FTuple_1.h"
#include "unitysdk/IJEABDMMNHK_FIANMFIIBPE.h"

class IJEABDMMNHK;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define IJEABDMMNHK_DMIDEAMJLEP_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x13AA6D40)
#define IJEABDMMNHK_DMIDEAMJLEP_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x13AA6DD0)
#define IJEABDMMNHK_DMIDEAMJLEP_INVOKE_OFFSET UNITYSDK_OFFSET(0x13AA6910)
#define IJEABDMMNHK_DMIDEAMJLEP__CTOR_OFFSET UNITYSDK_OFFSET(0x13AA6900)

inline static constexpr unsigned int IJEABDMMNHK_DMIDEAMJLEP_TypeDefinitionIndex = 68591;

class IJEABDMMNHK_DMIDEAMJLEP : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + IJEABDMMNHK_DMIDEAMJLEP__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::IJEABDMMNHK_FIANMFIIBPE FBAEPLEAIGK, ::Foundation::FTuple_1<::IJEABDMMNHK*>& MNABHBDEBPH)
	{
		return ((::System::Void(*)(::PVOID, ::IJEABDMMNHK_FIANMFIIBPE, ::Foundation::FTuple_1<::IJEABDMMNHK*>&))((::PBYTE)hIl2Cpp + IJEABDMMNHK_DMIDEAMJLEP_INVOKE_OFFSET))(this, FBAEPLEAIGK, MNABHBDEBPH);
	}

	::System::IAsyncResult* BeginInvoke(::IJEABDMMNHK_FIANMFIIBPE FBAEPLEAIGK, ::Foundation::FTuple_1<::IJEABDMMNHK*>& MNABHBDEBPH, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::IJEABDMMNHK_FIANMFIIBPE, ::Foundation::FTuple_1<::IJEABDMMNHK*>&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + IJEABDMMNHK_DMIDEAMJLEP_BEGININVOKE_OFFSET))(this, FBAEPLEAIGK, MNABHBDEBPH, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::Foundation::FTuple_1<::IJEABDMMNHK*>& MNABHBDEBPH, ::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::FTuple_1<::IJEABDMMNHK*>&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + IJEABDMMNHK_DMIDEAMJLEP_ENDINVOKE_OFFSET))(this, MNABHBDEBPH, IGAAKDOIPNN);
	}
};
