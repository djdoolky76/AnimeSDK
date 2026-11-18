#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/JEELOLHMHBG.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define FNJJMCDKCJH_LILMKDBMLCN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xBB6FA70)
#define FNJJMCDKCJH_LILMKDBMLCN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xBB6FAE0)
#define FNJJMCDKCJH_LILMKDBMLCN_INVOKE_OFFSET UNITYSDK_OFFSET(0xBB6F780)
#define FNJJMCDKCJH_LILMKDBMLCN__CTOR_OFFSET UNITYSDK_OFFSET(0xBB6F770)

inline static constexpr unsigned int FNJJMCDKCJH_LILMKDBMLCN_TypeDefinitionIndex = 43764;

class FNJJMCDKCJH_LILMKDBMLCN : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FNJJMCDKCJH_LILMKDBMLCN__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Boolean Invoke(::JEELOLHMHBG& LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::JEELOLHMHBG&))((::PBYTE)hIl2Cpp + FNJJMCDKCJH_LILMKDBMLCN_INVOKE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::IAsyncResult* BeginInvoke(::JEELOLHMHBG& LJBPECKCCEA, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::JEELOLHMHBG&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FNJJMCDKCJH_LILMKDBMLCN_BEGININVOKE_OFFSET))(this, LJBPECKCCEA, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Boolean EndInvoke(::JEELOLHMHBG& LJBPECKCCEA, ::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::JEELOLHMHBG&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FNJJMCDKCJH_LILMKDBMLCN_ENDINVOKE_OFFSET))(this, LJBPECKCCEA, IGAAKDOIPNN);
	}
};
