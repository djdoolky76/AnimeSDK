#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEBFFIGBDDC.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define LHKNJNJDDOF_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16C51540)
#define LHKNJNJDDOF_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16C51610)
#define LHKNJNJDDOF_INVOKE_OFFSET UNITYSDK_OFFSET(0x16C50EF0)
#define LHKNJNJDDOF__CTOR_OFFSET UNITYSDK_OFFSET(0x16C50EE0)

inline static constexpr unsigned int LHKNJNJDDOF_TypeDefinitionIndex = 48801;

class LHKNJNJDDOF : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + LHKNJNJDDOF__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::System::String* FAELKDHFDOP, ::System::Single MMLKOEPCAEI, ::GEBFFIGBDDC CGAFPDDFMFB, ::System::Boolean GDCBJJMKGGJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::GEBFFIGBDDC, ::System::Boolean))((::PBYTE)hIl2Cpp + LHKNJNJDDOF_INVOKE_OFFSET))(this, FAELKDHFDOP, MMLKOEPCAEI, CGAFPDDFMFB, GDCBJJMKGGJ);
	}

	::System::IAsyncResult* BeginInvoke(::System::String* FAELKDHFDOP, ::System::Single MMLKOEPCAEI, ::GEBFFIGBDDC CGAFPDDFMFB, ::System::Boolean GDCBJJMKGGJ, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Single, ::GEBFFIGBDDC, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + LHKNJNJDDOF_BEGININVOKE_OFFSET))(this, FAELKDHFDOP, MMLKOEPCAEI, CGAFPDDFMFB, GDCBJJMKGGJ, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + LHKNJNJDDOF_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
