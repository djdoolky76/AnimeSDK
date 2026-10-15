#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJHEFPNNKKC;
class ENJKEDGCLJF;
class ICONDBACCHJ;
class JLCJBFLKOJD;
class KNOOGHJPPBL;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define EFCKAAKHBKG_CTOR_OFFSET UNITYSDK_OFFSET(0x13A483D0)
#define EFCKAAKHBKG_LLGAFJEJLEA_OFFSET UNITYSDK_OFFSET(0x13A483F0)
#define EFCKAAKHBKG_OBHHNAKALGL_OFFSET UNITYSDK_OFFSET(0x13A485B0)

inline static constexpr unsigned int EFCKAAKHBKG_TypeDefinitionIndex = 81499;

	class EFCKAAKHBKG : public ::System::Object
	{
	public:
		::ENJKEDGCLJF* IJPANNPNBFG; // 0x10
		::ICONDBACCHJ* LIIFJAEMFDP; // 0x18
		::KNOOGHJPPBL* CKHDGEHELHN; // 0x20
		::AJHEFPNNKKC* MOHKEEEHFOB; // 0x28
		::System::Void _ctor(::KNOOGHJPPBL* a1, ::AJHEFPNNKKC* a2, ::ENJKEDGCLJF* a3, ::ICONDBACCHJ* a4)
		{
			return ((::System::Void(*)(::PVOID, ::KNOOGHJPPBL*, ::AJHEFPNNKKC*, ::ENJKEDGCLJF*, ::ICONDBACCHJ*))((::PBYTE)hIl2Cpp + EFCKAAKHBKG_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::AvatarSystem::IAvatar* LLGAFJEJLEA(::JLCJBFLKOJD* a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::JLCJBFLKOJD*))((::PBYTE)hIl2Cpp + EFCKAAKHBKG_LLGAFJEJLEA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>* OBHHNAKALGL()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCKAAKHBKG_OBHHNAKALGL_OFFSET))(this);
		}

	};
