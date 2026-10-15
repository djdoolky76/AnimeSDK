#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJCJJOCGIEL;
class DMGLFMNEJGL;
namespace System { class Object; }
namespace System { class String; }

#define BKGOLMLACGJ_FIEJJMHKJCH_OFFSET UNITYSDK_OFFSET(0xB7B5010)
#define BKGOLMLACGJ_HGAFLLOHNMO_1_OFFSET UNITYSDK_OFFSET(0xB7B5320)
#define BKGOLMLACGJ_HGAFLLOHNMO_OFFSET UNITYSDK_OFFSET(0xB7B4B00)

	class BKGOLMLACGJ : public ::System::Object
	{
	public:
		// static const ::System::String* LGNBDPHHFHL; // 0x0
		static ::System::Object* HGAFLLOHNMO(::AJCJJOCGIEL* a1)
		{
			return ((::System::Object*(*)(::AJCJJOCGIEL*))((::PBYTE)hIl2Cpp + BKGOLMLACGJ_HGAFLLOHNMO_OFFSET))(a1);
		}

		static ::AJCJJOCGIEL* FIEJJMHKJCH(::System::Object* a1)
		{
			return ((::AJCJJOCGIEL*(*)(::System::Object*))((::PBYTE)hIl2Cpp + BKGOLMLACGJ_FIEJJMHKJCH_OFFSET))(a1);
		}

		static ::System::Object* HGAFLLOHNMO_1(::System::String* a1, ::System::String* a2, ::DMGLFMNEJGL* a3)
		{
			return ((::System::Object*(*)(::System::String*, ::System::String*, ::DMGLFMNEJGL*))((::PBYTE)hIl2Cpp + BKGOLMLACGJ_HGAFLLOHNMO_1_OFFSET))(a1, a2, a3);
		}

	};
